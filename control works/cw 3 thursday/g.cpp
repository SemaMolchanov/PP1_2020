#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>


using namespace std;

bool prime_checker(int n) {
    if (n < 2) {
        return false;
    }
    bool answer = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            answer = false;
        }
    }
    return answer;
}

void print_prime_factors(int n, int i = 2) {
    if (n == 1)
    return;
    if (n % i == 0 && prime_checker(i)){
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