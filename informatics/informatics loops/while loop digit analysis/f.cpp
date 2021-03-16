#include <iostream>
#include <cmath>

using namespace std;

int reverse(int n, int cnt, int digit){
    int k = n;
    while (n > 0){
        cnt++;
        n /= 10;
    }
    int t = k;
    while (k > 0){
        int r = k % 10;
        int rank = cnt - 1;
        while (rank > 0){
            r *= 10;
            rank--; 
        }
        digit += r;
        cnt--;
        k /= 10;
    }
    return digit;
}

int main(){
    int n, cnt = 0, digit = 0, counter = 0;
    cin >> n;
    int i = 1;
    while (i <= n){
        if (i == reverse(i, cnt, digit)){
            counter++;
        }
        i++;
    }
    cout << counter;
    return 0;
}