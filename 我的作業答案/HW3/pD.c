#include <stdio.h>
#define p(s) fputs(s,stdout)
#define LL long long
int main(){
	LL a,b;
	scanf("%lld%lld",&a,&b);
	if((a>>63)^(b>>63))p("No");
	else{
		if(a<0&&a+b>=0)p("Yes");
		else if(a>=0&&a+b<0)p("Yes");
		else p("No");
	}
	return 0;
}
