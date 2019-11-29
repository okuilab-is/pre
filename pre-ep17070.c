#include <stdio.h>

int main(void){
	long i,a,x,n,m;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);

	a=x;

	for(i=1;i<n;i++){
		x=x*a;
	}
	x=x%m;
	printf("%ld\n",x);
}
