#include <stdio.h>
int main(){
	int n,i=1;
	long double ans=1,k=1;
	for(scanf("%d",&n);i<=n;++i,k*=i)ans+=1.00/k;
	printf("%.18Lf",ans);
	return 0;
}
