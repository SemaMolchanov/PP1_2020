#include <iostream>

using namespace std;

int main(){
    int size, cnt = 0;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++){
        cin >> a[i];
        if (a[i] > 0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}