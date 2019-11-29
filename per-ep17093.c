#include <stdio.h>

void main(){
  long x,n,m;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  long l=0;
  for (int i=0;i<n;i++){
    l=l+x%m;
    if(l%m==0){
	l=0;
    }
  }
  printf("%ld\n",l);
}
