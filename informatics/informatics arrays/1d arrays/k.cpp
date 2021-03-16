#include <iostream>

using namespace std;

int main(){
    int size, prev, next, cnt = 1;
    cin >> size;
    int a[size];
    cin >> a[0];
    prev = a[0];
    for (int i = 1; i < size; i++){
        cin >> a[i];
        next = a[i];
        if (next != prev){
            cnt++;
        }
        prev = next;
    }
    cout << cnt;
    return 0;
}