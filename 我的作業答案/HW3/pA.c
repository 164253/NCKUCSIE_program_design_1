#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;double s;
	scanf("(%d,%d,%d)",&a,&b,&c);
	s=(a+b+c)/(double)2.0;
	printf("Area of triangle (%d,%d,%d) is %d.\n",a,b,c,(int)sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
