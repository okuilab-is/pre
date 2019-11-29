#include <stdio.h>
int main(void){
	long a,x,n,m;
	a=1;
	scanf("%ld%ld%ld",&x,&n,&m);
	for(int i=0;i<n;i++){
		a*=x;
		if(a>m){
			a%=m;
		}
	}
	a%=m;
	printf("%ld\n",a);
	return 0;
}
	
