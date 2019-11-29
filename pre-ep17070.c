#include <stdio.h>

int main(void){
	int i;
	long a,x,n,m;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);

	a=x;

	for(i=0;i<n;i++){
		x*=a;
	}
	x=x/m;
	printf("%ld",x);
}
