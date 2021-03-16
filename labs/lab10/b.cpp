#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

long long itself_power(long long x){
    long long product;
    if (x == 0){
        product = 1;
        return product;
    }
    product = 1;
    for (int i = 0; i < x; i++){
        product *= x;
    }
    return product;
}

void exp(vector<long long> &v, int n, long long x){
    if (x > n){
        return;
    }
    v.push_back(itself_power(x));
    return exp(v, n, x + 1);
}

int main(){
    vector<long long> v;
    int n;
    long long x = 0;
    cin >> n;
    exp(v, n, 0);
    for_each(v.begin(), v.end(), [](long long a){
        cout << a << " ";
    });
    return 0;
}