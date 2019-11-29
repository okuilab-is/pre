#include <stdio.h>

void main(){
  long x,n,m;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  for (int i=0;i<n;i++){
    x=x*x;
  }
  printf("%ld\n",x%m);
}
