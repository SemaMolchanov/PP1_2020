#include <iostream>

using namespace std;

int arr[45];

int fibonacci(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    arr[n] = fibonacci(n-1) + fibonacci(n-2);
    return arr[n];
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}