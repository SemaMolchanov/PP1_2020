#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++){
        cin >> a[i];
        if (i % 2 == 1){
            swap(a[i], a[i-1]);
        }
    }
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    return 0;
}