#include <stdio.h>
int main(){
	long x,n,m;
	long a;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	
	for(int i=0; i<n; i++){
		a=x*x;
	}
	a=a%m;
	printf("%ld\n",a);

}

