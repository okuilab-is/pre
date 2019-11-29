#include <stdio.h>

int main(){
	long x,x1,n,m;
	long a,b;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	
	for (int i=0; i<n; i++){
		if(i==0){
			x1=1;
		}
		x1=x*x1;
	}
	
	b=x1%m;
//	printf(">>>%d\n",a); 
	printf("%ld\n",b);
	
}

