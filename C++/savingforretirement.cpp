#include <iostream>
using namespace std;

int main(){
    int bobAge; //20
    int bobRetirementAge; //25
    int bobSaves; //5
    int aliceAge; //20
    int aliceSaves; //10
    
    cin >> bobAge >> bobRetirementAge >> bobSaves >> aliceAge >> aliceSaves;
    
    int bobAgeUntil = bobRetirementAge - bobAge; //5
    int bobRetirementFund = bobAgeUntil * bobSaves; // 5*5=25
    int aliceRetirementFund = 0;
    int aliceAgeAt = aliceAge;
    
    while(aliceRetirementFund <= bobRetirementFund){
        aliceRetirementFund = aliceRetirementFund + aliceSaves;
        aliceAgeAt++;
    }
    cout << aliceAgeAt;
}