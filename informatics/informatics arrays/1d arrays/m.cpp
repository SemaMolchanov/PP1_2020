#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int size, a, b, c, d;
    cin >> size >> a >> b >> c >> d;
    int arr[size];
    for (int i = 0; i < size; i++){
        arr[i] = i + 1;
    }
    reverse(arr + a - 1, arr + b);
    reverse(arr + c - 1, arr + d);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}