#include <iostream>
#include <sstream>

using namespace std;

int main() {
    bool canMove = 1;
    int movesMade = 0;
		string str;
		getline(cin, str);
		if (str.empty()){
      return 0;
    }
  
		istringstream iss(str); //https://cplusplus.com/reference/sstream/istringstream/istringstream/
		int kangOne, kangTwo, kangThree;
		iss >> kangOne >> kangTwo >> kangThree;
    while(canMove){
      if(kangOne == kangTwo || kangTwo == kangThree || kangOne == kangThree){
        canMove = 0;
        break;
      }
      if(kangOne+1 == kangTwo && kangTwo+1 == kangThree){
        canMove = 0;
        break;
      }
      
      int diffOne = kangTwo - kangOne;
      int diffTwo = kangThree - kangTwo;
      if(diffOne <= 1 && diffTwo <= 1){
        canMove = 0;
        break;
      }
      if(diffOne > diffTwo){
        int temp = kangTwo - 1;
          if(temp == kangThree || temp == kangTwo || temp == kangOne){
            canMove = 0;
            break;
          }
        kangThree = temp;
        temp = kangTwo;
        kangTwo = kangThree;
        kangThree = temp;
        movesMade++;
      }else{
        int temp = kangTwo + 1;
        if(temp == kangThree || temp == kangTwo || temp == kangOne){
          canMove = 0;
          break;
        }
        kangOne = temp;
        temp = kangTwo;
        kangTwo = kangOne;
        kangOne = temp;
        movesMade++;
      }
    }

  cout << movesMade;
  return 0;
}