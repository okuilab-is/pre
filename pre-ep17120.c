#include <stdio.h>
int main(void){
	long a,x,n,m;
	a=0;
	scanf("%ld%ld%ld",&x,&n,&m);
	for(int i=0;i<n;i++){
		x*=x;
		if(x>m){
			a+=x%m;		
			x-=m;
		}
	}
	printf("%ld",a);
	return 0;
}
	
