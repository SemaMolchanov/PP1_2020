#include <iostream>
#include <cmath>

using namespace std;

void arr_diff(int a[], int b[], int size){
    int d[size];
    for (int i = 0; i < size; i++){
        d[i] = (a[i] - b[i]);
        if (d[i] < 0){
            d[i] = d[i] * -1;
        }
        cout << d[i] << " ";
    }
}

int main(){
    int size;
    cin >> size;
    int a[size], b[size];
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    for (int i = 0; i < size; i++){
        cin >> b[i];
    }
    arr_diff(a, b, size);
    return 0;
}