#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

bool prime_check(int n_th) {
    if (n_th < 2) {
        return false;
    }
    bool answer = true;
    for (int i = 2; i <= sqrt(n_th); i++) {
        if (n_th % i == 0) {
            answer = false;
        }
    }
    return answer;
}

int main() {
    int n_th, count, result;
    cin >> n_th;
    count = 0;
    for(int i = 2; count != n_th; i++){
        if (prime_check(i)) {
            count++;
            result = i;
        }
    }
    cout << result << endl;
    return 0;
}
