#include <iostream>
#include<queue>
using namespace std;

int main() {
  int seeds;
  cin >> seeds;
  priority_queue<int> times;
  for(int i = 0; i < seeds; i++){
    int temp;
    cin >> temp;
    times.push(temp);
  }

  int days = 1;
  int max = 0;
  for(int i = 0; i < seeds; i++){
    if(days + times.top() + 1 > max){
      max = days + times.top() + 1;
    }
    ++days;
    times.pop();
  }
  cout << max;
}