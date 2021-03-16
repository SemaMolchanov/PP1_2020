#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int prev, next, cnt = 1, maxcnt = 0;
    cin >> prev;
    while (true){
        cin >> next;
        if (next == 0){
            break;
        }
        if (next == prev){
            cnt++;
        }
        else{
            maxcnt = max(cnt, maxcnt);
            cnt = 1;
        }
        prev = next;
    }
    cout << maxcnt;
    return 0;
}