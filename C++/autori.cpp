#include <iostream>
using namespace std;

int main() {
  string message;
  cin >> message;
  for(int i = 0; i < message.length(); i++){
    if(message[i] >= 'A' && message[i] <= 'Z'){
      cout << message[i];
    }
  }
}