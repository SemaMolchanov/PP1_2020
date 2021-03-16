#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

void print_prime_factors(int k) {
    while (k%2 == 0 && k > 0) {
        cout << 2;
        k = k/2;
        if (k > 0) {
            cout << " ";
        }
    }
    for (int t = 3; t <= sqrt(k); t = t + 2){
        while (k%t == 0 && k > 0){
            cout << t;
            k = k/t;
            if (k > 0) {
                cout << " ";
            }
        }
    }
    if (k > 2) {
        cout << k;
    }
    cout << endl;
}

int main() {
    int k;
    cin >> k;
    print_prime_factors(k);
    return 0;
}