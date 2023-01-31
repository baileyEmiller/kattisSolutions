#include <iostream>
using namespace std;

int main(){
    int top, bot;
    while(cin >> top >> bot){
        if(bot == 0){
            return 0;
        }else if(top == 0){
            cout << 0 << " / " << top << "\n";
        }else{
            cout << top/bot << " " << top%bot << " / " << bot << "\n";
        }
    }
}