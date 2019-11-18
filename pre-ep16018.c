#include<stdio.h>
int main(){
	long x,n,m,xx=1;
	scanf("%ld%ld%ld",&x,&n,&m);
	int i;
	for(i=0;i<n;i++){
		xx=(xx*x)%m;
	}
	printf("%ld\n",xx;
}
