#include <iostream>

using namespace std;

int main (){
    int number, noRemCount = 0, remCount = 0;
    cin >> number;
    for (int i = 2; i <= number; i++){
        if(number%i == 0){
            noRemCount++;
        }
        else{
            remCount++;
        }
    }
    if(remCount == number-2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
return 0;
}