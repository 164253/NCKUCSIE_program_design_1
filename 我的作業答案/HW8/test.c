#include <stdio.h>
#include <stdlib.h>
//#define init(mp) (for(int i=0;i<26;++i){mp[i]=(int**)malloc(26<<3);for(int j=0;j<26;++j)mp[i][j]=(int*)malloc(26<<3);})
#define modify(p,v) (*p=v)
#define query(p,a,b) ((*p[a[0]-65][a[1]-65][a[2]-65])&1^(*p[b[0]-65][b[1]-65][b[2]-65])&1)

int main()
{
        int*** mp;
        mp = (int***)malloc( 26 * sizeof(int***) );
        //init(mp);
        for(int i=0;i<26;++i){mp[i]=(int**)malloc(26<<3);for(int j=0;j<26;++j)mp[i][j]=(int*)malloc(26<<3);}
        int q = 1000;
        while(q--)
        {
	        int opt;
                scanf("%d",&opt);
                if( opt == 1 )
                {
	                char str[4] = {};
                        int val;
                        scanf("%s %d",str,&val);
                        int* pos = &(mp[str[0]][str[1]][str[2]]);
                        modify(pos,val);
                }
                else
                {
	                char a[4],b[4];
                        scanf("%s %s",a,b);
                        int check = query(&mp,a,b);
                        printf("%d %d %d,%d %d %d\n",a[0]-65,a[1]-65,a[2]-65,b[0]-65,b[1]-65,b[2]-65);
                        printf( ( check == 1 ? "YES\n" : "NO\n" ) );
                }
        }
}
