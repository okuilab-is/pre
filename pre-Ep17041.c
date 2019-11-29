#include <stdio.h>
int main(void){
	long x,n,m;
	scanf("%ld",&x);
	scanf("%ld",&n);
	scanf("%ld",&m);
	for(int i=1;i<=n;i++)
		x*=x;
	if(x%m==0){printf("%ld\n",x);}
	else{printf("%ld\n",x%m);}
	return 0;
}
