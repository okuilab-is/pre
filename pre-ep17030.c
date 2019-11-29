#include <stdio.h>
int main(void)
{
  int x,n,m,i,y;

  scanf("%d",&x);
  scanf("%d",&n);
  scanf("%d",&m);

  for(i=0;i<n;i++){
    x=x*x;
  }
  
  y=x%m;

  printf("%d",y);
}
