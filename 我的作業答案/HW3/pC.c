#include <stdio.h>
int main(){
	int a,b,c,ans=0;
	scanf("%d-%d-%d",&a,&b,&c);
	if(a==c&&a==b)ans+=300;
	if(a+b<c)ans+=150;
	if(a==c)ans+=100;
	if(a<b)ans+=50;
	printf("%d",ans);
	return 0;
}
