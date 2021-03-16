#include <iostream>

using namespace std;

double arr[100];

double power(double a, int n){
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return a;
    }
    arr[n] = a*power(a, n - 1);
    return arr[n];
}

int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
}