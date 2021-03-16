#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    bool answer = true;
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            answer = false;
        }
    }
    return answer;
}

void print_prime_factors(int n, int i = 2) {
    if (n == 1)
    return;
    if (n % i == 0 && is_prime(i)){
        cout << i;
        if (n > 1){
            cout << " ";
        }
    print_prime_factors(n/i, i);
    } 
    else{
        print_prime_factors(n, i + 1);
    }
}

int main() {
    int n;
    cin >> n;
    print_prime_factors(n);
    cout << endl;
    return 0;
}