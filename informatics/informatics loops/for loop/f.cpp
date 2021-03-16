#include <iostream>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    for (int i = n; i > 0; i /= 10){
        cnt++;
    }
    int max = cnt;
    for (; n > 0; n /= 10){
        int r = n%10;
        if (cnt == max && r == 0){
            continue;
        }
        cout << r;
        cnt--;
    }
    return 0;
}