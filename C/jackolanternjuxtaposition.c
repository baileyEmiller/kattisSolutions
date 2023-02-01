//Name: Bailey Miller
//Abstract: Jack-O'-Lantern Juxtaposition
#include <stdio.h>

int main(void) {
  int n, t, m, temp, count = 1;
  int combos[3] = {1, 1, 1};
  scanf("%d%d%d", &n, &t, &m);
  for(int i = 0; i < n; i++){
    combos[1] = 1;
    for(int k = 0; k < t; k++){
      combos[2] = 1;
      for(int l = 0; l < m-1; l++){
        combos[2] = combos[2] + 1;
       // printf("%d%d%d\n", combos[0], combos[1], combos[2]);
        if(l < m-1){
          count++;
        }
      }
      combos[1] = combos[1] + 1;
      combos[2] = 1;
     // printf("%d%d%d\n", combos[0], combos[1], combos[2]);
      if(k < t-1){
        count++;
      }
    }
    combos[0] = combos[0] + 1;
    //printf("%d%d%d\n", combos[0], combos[1], combos[2]);
    if(i < n-1){
      count++;
    }
  }
  printf("%d", count);
  return 0;
}
