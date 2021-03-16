#include <iostream>
#include <map>

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

void insert_prime_factors(map<int, int> &pr, int n, int i = 2) {
    if (n == 1)
    return;
    if (n % i == 0 && is_prime(i)){
        pr[i] += 1;
        insert_prime_factors(pr, n/i, i);
    } 
    else{
        insert_prime_factors(pr, n, i + 1);
    }
}

int main() {
    map<int, int> pr;
    int n;
    cin >> n;
    insert_prime_factors(pr, n);
    map<int, int>::iterator it = begin(pr);
    cout << it->first;
    if (it->second != 1){
        cout << "^" << it->second;
    }
    it++;
    for(;it != end(pr); it++){
        cout << "*" << it->first;
        if (it->second != 1){
            cout << "^" << it->second;
        }
    }
    return 0;
}