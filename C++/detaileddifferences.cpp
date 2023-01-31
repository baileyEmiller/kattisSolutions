#include <iostream>
using namespace std;

int main() {
  int size;
  cin >> size;
  for(int i = 0; i < size; i++){
    string message1, message2;
    cin >> message1 >> message2;
    cout << message1 << "\n" << message2 << "\n";
    for(int k = 0; k < message1.length(); k++){
      if(message1[k] == message2[k]){
        cout << ".";
      }else{
        cout << "*";
      }
    }
    cout << "\n\n";
  }
}