#include <iostream>
using namespace std;

int getIndex(int* arr, int size, int integer);

int main() {
  bool readingNumbers = 1;
  while(readingNumbers){
    int arr1[5000];
    int arr2[5000];
    int printedArr[5000];
    int size;
    cin >> size;
    if(size == 0){
      readingNumbers = 0;
      break;
    }
    for(int i = 0; i < size*2; i++){ //loads both arrays
      if(i < size){
        cin >> arr1[i];
        }else{
        cin >> arr2[i-size];
        }
    }

    int arr1sorted[5000];
    for(int i = 0; i < size; i++){ // loads sorted array with unsorted elements
      arr1sorted[i] = arr1[i];
    }

    for(int i = 0; i < size-1; i++){ //sorts sorted array
      if(i < 0){ //if i is less than 0, sets to 0
        i = 0;
      }
      if(arr1sorted[i] > arr1sorted[i+1]){ //if current is greater than next, swap
        int temp = arr1sorted[i];
        arr1sorted[i] = arr1sorted[i+1];
        arr1sorted[i+1] = temp;
        i--;
        i--; //-2, +1 to ensure that we didn't miss anything
      }
    }
    
    int arr2sorted[5000];
    for(int i = 0; i < size; i++){ //loads 2nd array into 2nd sorted array
      arr2sorted[i] = arr2[i];
    }

     for(int i = 0; i < size-1; i++){ //sorts array
       if(i < 0){
         i = 0;
       }
        if(arr2sorted[i] > arr2sorted[i+1]){
          int temp = arr2sorted[i];
          arr2sorted[i] = arr2sorted[i+1];
          arr2sorted[i+1] = temp;
          i--;
          i--;
        }
      }

    for(int i = 0; i < size; i++){
      printedArr[i] = arr2sorted[getIndex(arr1sorted, size, arr1[i])];
    }
    for(int i = 0; i < size; i++){
      cout << printedArr[i] << "\n";
    }

    cout << "\n";
  }
}

int getIndex(int* arr, int size, int integer) {
     for (int i = 0; i < size; i++) {
          if (arr[i] == integer) {
               return i;
          }
     }
  cout << "Error in getIndex\n";
  return 0;
}