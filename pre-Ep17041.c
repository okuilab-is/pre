#include <stdio.h>
int main(void){
	long x,n,m,a=1;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	for(int i=1;i<=n;i++)a*=x;
	//x=x%m;
	printf("%ld\n",x);
	return 0;
}
