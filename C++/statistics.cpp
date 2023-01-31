#include <iostream>
#include <sstream>

using namespace std;

int main() {
int currentCase = 1;
  bool active = 1;
  int min;
  int max;
  while(active){
		string str;
		getline(cin, str);
		if (str.empty()){
		    active = 0;
            continue;
        }
		istringstream iss(str); //https://cplusplus.com/reference/sstream/istringstream/istringstream/
		int currentSize, currentNumb;
		iss >> currentSize;
		min = 1000001;
		max = -1000001;
		for (int i = 0; i < currentSize; i++) {
			iss >> currentNumb;
      if(currentNumb < min){
        min = currentNumb;
      }
      if(currentNumb > max){
        max = currentNumb;
      }
		}
		cout << "Case " << currentCase << ": " << min << " " << max << " " << max - min << "\n";
    currentCase++;
	}
  return 0;
}