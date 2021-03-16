#include <iostream>

using namespace std;

int sum_of_digits(int number){
    int sum = 0;
    if (number > 0){
        while (number != 0){
            sum = sum + number%10;
            number = number/10;
        }
    }
    return sum;
}

int main(){
    int number;
    cin >> number;
    cout << sum_of_digits(number);
    return 0;
}