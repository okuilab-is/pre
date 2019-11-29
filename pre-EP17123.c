#include<stdio.h>

int main(void){
	int i;
	long a,x,n,m;
	scanf("%ld %ld %ld",&x,&n,&m);
	a=x;
	for(i=0; i<n-1; i++){	 
		a=(a*x)%m;
	}
	if(n==1) a=a%m;
	printf("%ld\n",a);
	return 0;
}
