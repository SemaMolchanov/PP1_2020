#include <iostream>

using namespace std;

int main(){
    int size, prev, next, cnt = 0;
    cin >> size;
    int a[size];
    cin >> a[0];
    prev = a[0];
    for (int i = 1; i < size; i++){
        cin >> a[i];
        next = a[i];
        if ((next > 0 && prev > 0) || (next < 0 && prev < 0)){
            cnt++;
        }
        prev = next;
    }
    cout << ((cnt == 0) ? "NO" : "YES");
    return 0;
}