#include <iostream>
using namespace std;

int main(){
    int chicken, guests;
    cin >> chicken >> guests;
    int leftover = guests - chicken;
    
    if(leftover < 0){
        if(leftover == -1){
            cout << "Dr. Chaz needs 1 more piece of chicken!\n";
        }else{
            cout << "Dr. Chaz needs " << -leftover << " more pieces of chicken!\n";
        }
        
    }else{
        if(leftover == 1){
            cout << "Dr. Chaz will have 1 piece of chicken left over!\n";
        }else{
            cout << "Dr. Chaz will have " << leftover << " pieces of chicken left over!\n";
        }
    }
}