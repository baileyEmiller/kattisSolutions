//Name: Bailey Miller
//Abstract: Tarifa
#include <stdio.h>

int main(void) {
  int nMonths, xMb, total = 0;
  scanf("%d%d", &xMb, &nMonths);
  for(int i = 0; i < nMonths; i++){
    total = total + xMb;
    int temp;
    scanf("%d", &temp);
    total = total - temp;
    if(total < 0){
      total = 0;
    }
  }
  total = total + xMb;
  printf("%d", total);
  return 0;
}
