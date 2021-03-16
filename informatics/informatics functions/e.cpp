#include <iostream>
#include <cmath>

using namespace std;

bool prime(int div, int n, int cnt){
    if (n == 2){
        return true;
    }
    if (div == n && cnt == 0){
        return true;
    }
    if (div == n && cnt != 0){
        return false;
    }
    if (n % div == 0){
        cnt++;
    }
    return prime(div + 1, n, cnt);
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    cout << (prime(2, n, cnt) ? "prime" : "composite");
}