#include <stdio.h>
int main(void){
	long a,x,n,m;
	a=1;
	scanf("%ld%ld%ld",&x,&n,&m);
	for(int i=0;i<n;i++){
		a*=x;
	}
	a%=m;
	printf("%ld",a);
	return 0;
}
	
