#include <iostream>
#include <string>
using namespace std;

int main() {
  int size;
  cin >> size;
  for(int i = 0; i < size; i++){
    bool isDuplicate = false;
    int iterationSize;
    string cities[100];
    int arrSize = 0;
    cin >> iterationSize;
    for(int k = 0; k < iterationSize; k++){
      string city;
      cin >> city;
      if(arrSize == 0){
        cities[arrSize] = city;
        arrSize++;
        //break;
      }else{
        for(int z = 0; z < arrSize; z++){
          if(cities[z] == city){ //prob where the error is
            isDuplicate = true;
            //break;
          }
        }
        if(!isDuplicate){
          cities[arrSize] = city;
          arrSize++;
        }else{
          isDuplicate = false;
        }
      }
    }
    cout << arrSize << "\n";
  }
}