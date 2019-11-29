#include <stdio.h>
int main(void){
	long x,n,m;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	for(int i=0;i<n;i++)
		x*=x;
	printf("%ld",x/m);
}
