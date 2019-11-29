#include <stdio.h>
int main(void){

  long x,n,m;//数値x、べき乗数n、余り数m

  scanf("%ld %ld %ld",x);//値入力
  scanf("%ld",n);
  scanf("%ld",m)
  for(int i=0;i<n;i++){//べき乗
    x*=x;
  }
  x=x%m;//余りを求める

  printf("%ld",x);
  

}
