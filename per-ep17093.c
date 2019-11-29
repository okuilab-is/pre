#include <stdio.h>
void main(){
  long x,n,m;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  long l=x,s=0;
  for (int i=0;i<n-1;i++){
    x=x*x;
    s=x%m;
    if(s==0) x=l;
    printf("%ld\n",s);
  }
  printf("%ld\n",s);
}
