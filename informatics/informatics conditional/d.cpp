#include <iostream>

using namespace std;

int main(){
    int n, sign;
    cin >> n;
    if (n > 0){
        sign = 1;
    }
    else if (n == 0){
        sign = 0;
    }
    else if (n < 1){
        sign = -1;
    }
    cout << sign;
    return 0;
}