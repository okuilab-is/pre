#include <stdio.h>
void main(){
  long x,n,m;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  long l=x;
  for (int i=0;i<n;i++){
    x=x*x;
    if(x%m==0) x=l;
  }
  printf("%ld\n",x%m);
}
