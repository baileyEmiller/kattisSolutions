#include <iostream>
using namespace std;

int main() {
  int available, booked;
  cin >> available >> booked;
  if(available == booked){
    cout << "too late";
    return 0;
  }
  int bookedRooms[100];
  for(int i = 0; i < booked; i++){
    cin >> bookedRooms[i];
  }
  int availableRoom = 1;
  for(int i = 0; i < booked; i++){
    if(bookedRooms[i] == availableRoom){
      availableRoom++;
      i = -1;
      continue;
    }
  }
  cout << availableRoom;
}