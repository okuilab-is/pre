#include<stdio.h>
int main(){
	long int x,n,m;
	scanf("%d%d%d",&x,&n,&m);
	int i;
	for(i=0;i<n;i++){
		x=(x*x)%m;
	}
	printf("%d\n",x);
}
