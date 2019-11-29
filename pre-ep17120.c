#include <stdio.h>
int main(void){
	long a,x,xs,n,m;
	a=0;
	scanf("%ld%ld%ld",&x,&n,&m);
	xs=x;
	for(int i=0;i<n;i++){
		xs*=x;
		if(xs>m){
			a+=x%m;		
			xs-=m;
		}
	}
	printf("%ld",a);
	return 0;
}
	
