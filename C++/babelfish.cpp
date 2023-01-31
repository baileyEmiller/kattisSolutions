#include <iostream>
#include <string.h>
#include <unordered_map> // https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/
using namespace std;

int main() {
  string currentLine;
  unordered_map<string, string> map; //foreign word is key because there are not duplicates
   while(getline(cin, currentLine) && currentLine != "") {
     string english, unknown;
     for(int i = 0; i < currentLine.length(); i++){
       if(currentLine[i] != ' '){
         continue;
       }else{
         unknown = currentLine.substr(i+1, (currentLine.length() - i));
         english = currentLine.substr(0, i);
         //cout << "checking:" << english << unknown << "\n";
         map.insert({unknown, english});
         break;
       }
     }
   }
  while(getline(cin, currentLine)) {
    if (map.find(currentLine) == map.end()){
      cout << "eh\n";
    }else{
      cout << map.at(currentLine) << "\n";
    }
  }
}