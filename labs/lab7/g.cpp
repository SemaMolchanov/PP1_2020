#include <iostream>

using namespace std;

int arr[30];

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    arr[n] = n * factorial(n-1);
    return arr[n];
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}