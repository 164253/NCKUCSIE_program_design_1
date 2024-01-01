#include <stdio.h>
#define p(s) fputs(s,stdout)
int main(){
	int a,b,c;
	scanf("%d-%d-%d",&a,&b,&c);
	if(a==c&&a==b)p("300");
	else if(a+b<c)p("150");
	else if(a==c)p("100");
	else if(a<b)p("50");
	else p("0");
	return 0;
}
