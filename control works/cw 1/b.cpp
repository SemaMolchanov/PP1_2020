#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    int num1 = (number %10) + (number % 100 / 10);
    int num2 = (number / 100000) + (number % 100000 / 10000);
    if (num1 == num2){
        cout << "YES";
} else{
        cout << "NO";
} return 0;
}