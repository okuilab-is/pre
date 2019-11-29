#include<stdio.h>

int main(void){
	int i;
	long x,n,m;
	scanf("%ld %ld %ld",&x,&n,&m);
	for(i=0; i<n; i++){
		x=x*x;
	}
	x=x%m;
	printf("%ld\n",x);
	return 0;
}
