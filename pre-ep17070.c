#include <stdio.h>

int main(void){
	int i;
	int a,x,n,m;
	scanf("%ld",x);
	scanf("%ld",n);
	scanf("%ld",n);

	a=x;
	printf("%ld",a);

	for(i=0;i<n;i++){
		x*=a;
	}
	
	printf("%ld",x/m);
}
