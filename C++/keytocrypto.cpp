#include <iostream>
using namespace std;

int main() {
  string message, key, decipheredText;
  cin >> message >> key; //SGZVQBUQAFRWSLC ACM
  decipheredText = message;

  for(int i = 0; i < message.size(); i++){
    //cout << "\nin loop " << i << "\n";
    int keyIndex = i % key.size();
    //cout << "\tkeyIndex = " << keyIndex;
    char shiftedChar = (message[i] - key[keyIndex] + 26) % 26;
    if(shiftedChar > 25){ //if we loop through the alphabet (A or Z)
      shiftedChar = shiftedChar - 26;
    }else if(shiftedChar < 0){
      shiftedChar = shiftedChar + 26;
    }
    shiftedChar = shiftedChar + 'A'; //+65
    decipheredText[i] = shiftedChar;
    key[keyIndex] = decipheredText[i]; //WHY DOES KATTIS NOT MENTION THIS???????? HAD TO LOOK UP WHAT AN AUTOKEY CIPHER IS AND KATTIS DOES NOT KNOW WHAT IT'S TALKING ABOUT
  }
  cout << decipheredText;
}