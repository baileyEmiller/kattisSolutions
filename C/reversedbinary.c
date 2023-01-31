#include <stdio.h>

int intToBinaryReversed(int *origNumber){
  int str[29];
  int started = 0;
  int index = 0;
  int number = *origNumber;
  int binaryStart = 536870912;
  
  for(int k = 0; k <= 29; k++){
    if(number >= binaryStart){
    number = number - binaryStart;
    str[index] = 1;
    started = 1;
    ++index;
  }else if(started == 1){
      str[index] = 0;
      ++index;
    }
    binaryStart = binaryStart/2;
  }

  int digit = 1;
  int sum = 0;
  for(int i = 0; i < index; i++){
    if(str[i] == 1){
      sum = sum + digit;
    }
    digit = digit * 2;
  }
  return sum;
}
  
int main(void) {
  int number = 0;
  scanf("%d", &number);
  int returnedNumber = intToBinaryReversed(&number);
  printf("%d", returnedNumber);

  return 0;
}