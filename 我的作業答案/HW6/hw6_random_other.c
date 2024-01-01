#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ps(s) fputs(s,stdout)
int main(){
        int n,i,j;srand(time(NULL));scanf("%d",&i);
        switch(i){
		case 1:for(n=rand()%195001+5000,i=n,printf("%d\n1",n);--i;)ps(" 1");ps("\n1");for(;--n;)ps(" 1");break;
		case 2:for(n=rand()%195001+5000,printf("%d\n%d",n,n),--n;--n;)printf(" %d",n+1);ps("\n1");break;
		case 3:for(n=rand()%50001+50000,printf("%d\n1",n);--n;)ps(" 1");ps("\n50000");for(n=50001;--n;)ps("\n1 1");for(n=50001;--n;)ps("\n1");break;
                case 4:for(n=rand()%501+500,i=n,printf("%d 500",n);i--;){ps("\n1");for(j=500;--j;)ps(" 1");}for(i=6;--i;)ps("\n1 1 1 1");for(;n--;){ps("\n1");for(j=500;--j;)ps(" 1");}break;
        }
        return 0;
}
