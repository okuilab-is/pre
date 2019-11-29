#include<stdio.h>

int main(void){
  long x, n, m, ans = 1;
    
  scanf("%ld %ld %ld", &x, &n, &m);
  
  for (int i = 0; i < n; i++){
    ans *= x;
    if ( i % 10 == 0 ) ans = ans % m;
  }

  ans = ans % m;

  printf("%ld\n", ans);
  return 0;
}
