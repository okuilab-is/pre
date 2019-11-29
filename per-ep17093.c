#include <stdio.h>
void main(){
  long x,n,m;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  long l=x,s=0;
  for (int i=0;i<n;i++){
    s+=x%m;
    if(s%m==0) s=0;
    printf("%ld\n",s);
  }
  printf("%ld\n",s);
}
