#include <iostream>

using namespace std;

int main(){
    int n, k, cnt = 0;
    cin >> k;
    for (int i = 1; i <= k; i++){
        cin >> n;
        if (n == 0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}