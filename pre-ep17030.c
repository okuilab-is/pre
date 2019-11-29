#include <stdio.h>
int main(void)
{
  long x,n,m,i,y,z;

  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);

  y=0,z=0;

  for(i=1;i<n;i++){
    y=y*x;
    z=y%m;
    printf("%ld",x);
  }

  printf("%ld\n",y);
}
