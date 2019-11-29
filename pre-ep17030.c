#include <stdio.h>
int main(void)
{
  long x,n,m,i,y;

  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);

  for(i=0;i<n;i++){
    x=x*x;
    y=x%m;
  }

  printf("%ld",y);
}
