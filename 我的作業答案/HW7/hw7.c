#include <stdio.h>
#define ps(s) fputs((s),stdout)
#define pc(c) putchar(c)
#define sub(a,b) (a<b?b-a:a-b)
int a[21],name[21],m,minm,minsel,o,k,i;
void f(int now,int sum,int k,int sel){
	if(!k){if(sub(sum,m)<minm){minm=sub(sum,m);minsel=sel;}}
	else if(now<21)f(now+1,sum,k,sel),f(now+1,sum+a[now],k-1,sel|1<<now);
}
int main(){
	do{
		ps("Options: ");scanf("%d",&o);
		if(o==1){
			ps("Please input file name and file size: ");for(i=21;i--;)if(!a[i])break;scanf("%d%d",name+i,a+i);
			if(!i){
				ps("Hard drive exceeds its capacity, please enter the number of files to be deleted: ");scanf("%d%d",&k,&m);minm=1e9;f(0,0,k,0);
				for(i=1,k=0;i<=minsel;i<<=1,++k)if(i&minsel){if((minsel&-minsel)!=i)pc(' ');printf("%d",name[k]);name[k]=a[k]=0;}pc('\n');
			}
		}
		else if(o==2){ps("Please input the file name: ");scanf("%d",&k);for(i=21;i--;)if(k==name[i])break;ps(i<0?"NO\n":"YES\n");}
	}while(o!=3);
	return 0;
}
