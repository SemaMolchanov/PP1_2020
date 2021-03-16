#include <iostream>

using namespace std;

int main(){
    int d, x, cnt = 0;
    cin >> x >> d;
    for (; x > 0; x /= 10){
        if (x % 10 == d){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}