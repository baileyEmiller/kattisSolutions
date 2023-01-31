//Name: Bailey Miller
//Abstract: take two stones
#include <stdio.h>

int main(void) {
    int numb;
    scanf("%d", &numb);
    if(numb % 2 == 0){
      printf("Bob");
    }else{
      printf("Alice");
    }
    return 0;
}