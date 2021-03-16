#include <iostream>

using namespace std;

int main(){
    int size, prev, cur, next, cnt = 0;
    cin >> size;
    int a[size];
    cin >> a[0] >> a[1];
    prev = a[0];
    cur = a[1];
    for (int i = 2; i < size; i++){
        cin >> a[i];
        next = a[i];
        if (cur > prev && cur > next){
            cnt++;
        }
        prev = cur;
        cur = next;
    }
    cout << cnt;
    return 0;
}