#include <stdio.h>
#include <math.h>
int main(void){

  long x,n,m;//数値x、べき乗数n、余り数m

  scanf("%ld %ld %d",&x,&n,&m);//値入力
  for(int i=0;i<n;i++){//べき乗
    x=x*x;
    x=x%m;
    printf("%ld\n",x);
  }
  //x=x%m;//余りを求める

  printf("%ld\n",x);
  

}
