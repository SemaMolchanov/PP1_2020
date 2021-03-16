#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool prime_check(int n_th) {
    if (n_th > -2 && n_th < 2) {
        return false;
    }
    if (n_th < -1){
        n_th *= -1;
    }
    bool answer = true;
    for (int i = 2; i <= sqrt(n_th); i++) {
        if (n_th % i == 0) {
            answer = false;
        }
    }
    return answer;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cnt = count_if(begin(v), end(v), prime_check);
    cout << cnt;
    return 0;
}