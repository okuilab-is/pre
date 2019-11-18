#include<stdio.h>
int main(){
	long x,n,m;
	scanf("%ld%ld%ld",&x,&n,&m);
	int i;
	for(i=0;i<n;i++){
		x=(x*x)%m;
	}
	printf("%ld\n",x);
}
