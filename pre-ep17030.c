#include <stdio.h>
int main(void)
{
  long x,n,m,i,y,z;

  scanf("%ld %ld %ld",&x,&n,&m);

  y=x,z=0;

  for(i=1;i<n;i++){
    y=y*x;
    z=y%m;
  }

  printf("%ld\n",z);
}
