#include <stdio.h>
int main(void){
	long x,n,m;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	for(int i=1;i<=n;i++)x*=x;
	x=x%m
	printf("%ld\n",x);
	return 0;
}
