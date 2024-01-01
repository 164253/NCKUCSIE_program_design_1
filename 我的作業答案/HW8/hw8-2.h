#define init(mp) for(int i=0;i<91;++i){mp[i]=(int**)malloc(91<<3);for(int j=0;j<91;++j)mp[i][j]=(int*)malloc(91<<3);}
#define modify(p,v) (*p=v+1)
#define query(p,a,b) ((*p[a[0]][a[1]][a[2]])&1^(*p[b[0]][b[1]][b[2]])&1)
