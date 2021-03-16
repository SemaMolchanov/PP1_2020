#include <iostream>

using namespace std;

double negative_power(double a, int n){
    if (n == 0){
        return 1;
    }
    if (n == -1){
        return 1/a;
    }
    return (1/a)*negative_power(a, n + 1);
}

double power(double a, int n){
    if (n < 0){
        return negative_power(a, n);
    }
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return a;
    }
    return a*power(a, n - 1);
}

int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
}