#include <stdio.h>
int main(){int a,b,n;scanf("%d,%d,%d",&a,&b,&n);printf("%d",(b<<a)+(a|b)-(n>>b)*(a^b)-(a&b));return 0;}
