#include <stdio.h>
#include <math.h>
int main(void){

  long x,n,m,b=1,ama;//数値x、べき乗数n、余り数m

  scanf("%ld %ld %ld",&x,&n,&m);//値入力
  for(int i=0;i<n;i++){//べき乗
    b*=x;
    b=b%m;
    //printf("%ld\n",b);
  }
  printf("%ld\n",b);
  return 0;  
}
