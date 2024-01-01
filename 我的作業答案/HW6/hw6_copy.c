#include <stdio.h>
#define swap(a,b) (a^=b^=a^=b)
long long a[1000005]={0};
int main(){
	int o,i,n,m,x,l,r;
	scanf("%d",&o);
	switch(o){
		case 1:
			for(scanf("%d",&n),i=n;i--;)scanf("%lld",a+i);
			printf("%lld",a[0]);for(i=1;i<n;++i)printf(" %lld",a[i]);
		break;
		case 2:
			for(scanf("%d",&n),l=0,i=n>>2<<2;i<=n;++i)l^=i;
			for(i=1;i<n;++i)scanf("%d",&x),l^=x;printf("%d",l);
		break;
		case 3:
			for(scanf("%d",&n),i=1;i<=n;++i){scanf("%lld",a+i);a[i]+=a[i-1];}
			for(scanf("%d",&n),i=0;i<n;++i)i&&putchar('\n'),scanf("%d%d",&l,&r),printf("%lld",a[r]-a[l-1]);
		break;
		case 4:
			for(scanf("%d%d",&n,&m),i=0;i<n*m;++i)scanf("%lld",a+i);
			for(i=0;i<5;++i){scanf("%d%d%d%d",&l,&r,&x,&o);swap(a[m*(l-1)+r-1],a[m*(x-1)+o-1]);}
			for(i=0;i<n;++i){i&&putchar('\n'),printf("%lld",a[m*i]);for(x=0;++x<m;)printf(" %lld",a[m*i+x]);}
		break;
	}
	return 0;
}
