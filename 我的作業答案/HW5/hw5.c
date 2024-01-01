#include <stdio.h>
#define gc() getchar()
int gcd(int a,int b){
	if(a<b)a^=b^=a^=b;
	while(b){
		a%=b;
		a^=b^=a^=b;
	}
	return a;
}
int EOFflag=0,nsflag=0;
int gi(){
	int n=0,neg=0;char c;
	if((c=gc())=='-'){neg=1;c=gc();}
	for(;'0'<=c&&c<='9';n+=c-'0',c=gc())n*=10;
	if(c==EOF){EOFflag=1;return -2;}
	if(c!=' '&&c!='\n'){nsflag=1;while((c=gc())!=' '&&c!='\n');}
	return neg?-n:n;
}
int main(){
	puts("//////////Welcome to NCKU-PD1-Kirby-Shop\\\\\\\\\\\\\\\\\\\\");
	int open=0,i,j,k,x,y,z,s,a=0,b=0,c=0,dis=0;
	start:while(1){
		puts("Options: (1)Openning (2)List (3)Adding (4)Exit");
		s=gi();
		if(EOFflag)return 0;
		switch(s){
			case 1:
				open?puts("Your Kirby shop has already opened :("):puts("Your shop is openning!"),open=1;
			break;
			case 2:
				printf("===================================\nKirby-A: %d\nKirby-B: %d\nKirby-C: %d\nKirby: %d, Money: %d\n===================================\n",a,b,c,a+b+c,a+b+c-(dis<<1));
			break;
			case 3:
				if(!open)puts("Your Kirby shop has not opened");
				else{
					fputs("Please enter three numbers: ",stdout);
					x=gi();y=gi();z=gi();
					if(EOFflag)return 0;
					if(nsflag||x<=0||y<=0||z<=0){
						while(nsflag||x<=0||y<=0||z<=0){
							nsflag=0;
							fputs("Error: Please try again or enter '-1 -1 -1' to make a new options: ",stdout);
							x=gi();j=nsflag;y=gi();j|=nsflag;z=gi();j|=nsflag;
							if(!j&&x==-1&&y==-1&&z==-1)break;
						}
						if(x==-1&&y==-1&&z==-1)goto start;
					}
					a+=x;b+=y;c+=z;
					k=gcd(gcd(x,y),z);
					dis+=k;
					printf("Divide these Kirbys into %d boxes, with the number of Kirby in each box being %d, %d, and %d\nPrice: %d\n",k,x/k,y/k,z/k,x+y+z-(k<<1));
				}
			break;
			case 4:return 0;
			default:puts("Error: Please try again!");
		}
	}
	return 0;
}
