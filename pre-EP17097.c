#include <stdio.h>
int main(){
	long x,n,m;
	long a,b;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	
	for(int i=0; i<n; i++){
		a=x*x;
	}
	b=a%m;

	printf(">>>%ld\n",a); 
	printf("%ld\n",b);

}

