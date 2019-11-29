#include<stdio.h>

int main(void){
	int i;
	long a=1,x,n,m;
	scanf("%ld %ld %ld",&x,&n,&m);
	//a=x;
	for(i=0; i<n; i++){	 
		a=(a*x)%m;
	}
	//a=a%m;
	printf("%ld\n",a);
	return 0;
}
