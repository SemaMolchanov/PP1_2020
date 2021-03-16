#include <iostream>

using namespace std;

int factorial(int n, int fact = 1){
    if (n == 0){
        return 1;
    }
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    float sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++){
        sum += 1/(float)(factorial(i));
    }
    cout << sum;
    return 0;
}