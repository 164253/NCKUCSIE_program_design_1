#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define swap(a,b) (a^=b^=a^=b)
long long a[1000005]={0};
int main(){
        int o,i,n,m,x,l,r;
        srand(time(NULL));
        scanf("%d",&o);
        switch(o){
                case 1:
                        for(n=rand()%195001+5000,printf("%d\n",n),i=n,a[--i]=rand()%1000000000+1,printf("%lld",a[i]);i--;){a[i]=rand()%1000000000+1;printf(" %lld",a[i]);}
                        printf("\n%lld",a[0]);for(i=1;i<n;++i)printf(" %lld",a[i]);
                break;
                case 2:
                        for(n=rand()%195001+5000,printf("%d\n",n),i=0;i<n;++i)a[i]=i+1;
			for(x=n;--x;){l=rand()%x;swap(a[l],a[x]);}
                        printf("%lld",a[1]);for(i=2;i<n;++i)printf(" %lld",a[i]);printf("\n%lld",a[0]);
                break;
                case 3:
                        for(n=rand()%50001+50000,a[1]=rand()%1000000000+1,printf("%d\n%lld",n,a[1]),i=1;++i<=n;a[i]+=a[i-1])printf(" %lld",a[i]=rand()%1000000000+1);
                        for(o=rand()%50001+50000,printf("\n%d",o),i=0;++i<=o;){l=rand()%n+1;r=rand()%n+1;l>r&&swap(l,r);printf("\n%d %d",l,r);a[n+i]=a[r]-a[l-1];}for(i=0;++i<=o;)printf("\n%lld",a[n+i]);
                break;
                case 4:
                        for(n=rand()%501+500,m=rand()%501+500,i=0;i<n*m;++i)a[i]=rand()%1000+1;
                        printf("%d %d\n",n,m);
                        for(i=0;i<n;++i){printf("%lld",a[m*i]);for(x=1;x<m;++x)printf(" %lld",a[m*i+x]);putchar('\n');}
                        for(i=0;i<5;++i){l=rand()%n;r=rand()%m;x=rand()%n;o=rand()%m;printf("%d %d %d %d\n",l+1,r+1,x+1,o+1);swap(a[m*l+r],a[m*x+o]);}
                        for(i=0;i<n;++i){i&&putchar('\n');printf("%lld",a[m*i]);for(x=0;++x<m;)printf(" %lld",a[m*i+x]);}
                break;
        }
        return 0;
}
