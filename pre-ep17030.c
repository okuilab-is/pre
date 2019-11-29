#include <stdio.h>
int main(void)
{
  long x,n,m,i,y,z;

  scanf("%ld %ld %ld",&x,&n,&m);
  //scanf("%ld",&n);
  //scanf("%ld",&m);

  y=x,z=0;

  for(i=1;i<n;i++){
    y=y*x;
    z=y%m;
    //printf("%ld",y);
  }

  printf("%ld\n",z);
}
