#include <stdio.h>
long jou(long x,long i){
	if(i==0){
		return 1;
	}else{
	return (jou(x,(i-1)/2)*jou(x,(i-1)/2));
	}

}


int main(){
	long x,n,m,a,b;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
		
	a=jou(x,n);
	
	b=a%m;
	printf(">>>%ld\n",a); 
	printf("%ld\n",b);
	
}

