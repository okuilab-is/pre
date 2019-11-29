#include <stdio.h>

int main(void){
	long i,a,x,n,m;
	scanf("%ld %ld %ld",&x,&n,&m);
	a=x;
	for(i=1;i<n;i++){
		x=x*a;
		if(x>m){
		x=x%m;	
		}
	}
	printf("%ld\n",x);
}
