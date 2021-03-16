#include <iostream>

using namespace std;

void valid(int number){
    int even_count = (number == 0) ? 1 : 0;
    int odd_count = 0;
    while (number != 0){
        if ((number % 10)%2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
        number = number / 10;
    }
    if (odd_count != 0){
        cout << "Not valid";
    }
    else{
        cout << "Valid";
    }
}

int main(){
    int number;
    cin >> number;
    valid(number);
    return 0;
}