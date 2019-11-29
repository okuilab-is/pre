#include <stdio.h>
long jou(long x,long i){
	if(i==0){
		return 1;
	}else{
	return (x*jou(x,(i-1)));
	}

}


int main(){
	long x,n,m;
	int a,b;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
		
	a=(int)jou(x,n);
	
	b=a%(int)m;
	printf(">>>%ld\n",a); 
	printf("%ld\n",b);
	
}

