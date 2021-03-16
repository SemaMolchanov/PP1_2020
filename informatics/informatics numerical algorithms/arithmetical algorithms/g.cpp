#include <iostream>

using namespace std;

bool is_prime(int k){
    if (k < 2){
        return false;
    }
    for (int i = 2; i * i <= k; i++){
        if (k % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, num1, num2;
    cin >> n;
    for (int i = 0; i < n; i++){
        if (is_prime(i) && is_prime(n - i)){
            num1 = i;
            num2 = n - i;
            break;
        }
    }
    cout << num1 << " " << num2;
    return 0;
}