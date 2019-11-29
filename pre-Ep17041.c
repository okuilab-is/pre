#include <stdio.h>
int main(void){
	long x,n,m,a=1;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	for(int i=1;i<=n;i++)a*=x;
	a=a%m;
	printf("%ld\n",a);
	return 0;
}
