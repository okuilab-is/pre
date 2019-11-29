#include <stdio.h>
int main(void){
	long x,n,m;
	scanf("%ld%ld%ld",&x,&n,&m);
	for(int i = 0;i<n;i++){
		x*=x;
	}
	printf("%ld",x);

	x%=m;
	printf("%ld",x);
}
	
