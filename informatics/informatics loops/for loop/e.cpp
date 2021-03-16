#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    for (; n > 0; n /= 10){
        int r = n%10;
        sum += r;
    }
    cout << sum;
    return 0;
}