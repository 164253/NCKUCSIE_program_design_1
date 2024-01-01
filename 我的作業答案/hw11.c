#include <stdio.h>
int main(int argc,char*argv[]){FILE *file=fopen(argv[1],"r");int ans[1<<8]={0},all=0;char str[20];
	while(fgets(str,20,file)){++all;char*p=str;for(;*p!='/';)++p;if(*(p+2)=='\n'&&*(p+1)<'8')continue;
		int n=str[0]-'0';if(str[1]!='.'){n=n*10+str[1]-'0';if(str[2]!='.')n=n*10+str[2]-'0';}++ans[n];}
	printf("The total number of prefixes in the input file is : %d.\n",all);
	for(int n=0;n<256;++n)printf("The number of prefixes in group %d = %d\n",n,ans[n]);fclose(file);return 0;}
