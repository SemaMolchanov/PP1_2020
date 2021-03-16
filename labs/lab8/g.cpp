#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>
using namespace std;

bool prime(int z){
    for(int i = 2; i < sqrt(z);i++){
        if(z%i == 0) return false;
    }
    return true;
}

int f(vector<int> N, int x, int cnt){
    for(int i = 0; i < N.size(); i++){
        if(N[i] > x && prime(N[i])) cnt++;
    }
    return cnt;
}

int main(){
    int n, y, x, cnt = 0;
    cin >> n;
    vector<int> N;
    N.reserve(n);
    for(int i=0;i<n;i++){
        cin >> y;
        N.push_back(y);
    }
    cin >> x;
    cout << f(N, x, cnt);
}