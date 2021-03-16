#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int a[35];
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    int tmpr = a[0];
    for (int i = 1; i < size; i++){
        swap(tmpr, a[i]);
    }
    swap(tmpr, a[0]);
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    return 0;
}