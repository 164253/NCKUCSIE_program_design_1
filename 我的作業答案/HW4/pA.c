#include <stdio.h>
int main(){
	int i=1,n,d;
	printf("Enter number of days in month: \n");
        scanf("%d",&n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): \n");
        scanf("%d",&d);
	for(;i<d;++i)fputs("   ",stdout);
	for(;i<=7&&i<n+d;++i){
		printf("%2d",i-d+1);
		if(i!=7&&i!=n)putchar(' ');
	}
	for(i=9-d,d=1;i<=n;++i,++d){
		if(d==1)putchar('\n');
		printf("%2d",i);
		if(d==7)d=0;
		else if(i!=n)putchar(' ');
	}
	return 0;
}
