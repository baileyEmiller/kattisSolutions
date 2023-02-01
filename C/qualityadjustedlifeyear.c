//Name: Bailey Miller
//Abstract: quality-adjusted life-year
#include <stdio.h>

int main(void) {
  float totalLife = 0, totalYears = 0, tempLife, tempYears;
  int lines;
  scanf("%d", &lines);
  for(int i = 0; i < lines; i++){
    scanf("%f%f", &tempLife, &tempYears);
    tempLife = tempLife * tempYears;
    totalLife = totalLife + tempLife;
  }
  printf("%f", totalLife);
  return 0;
}