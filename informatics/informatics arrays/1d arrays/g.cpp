#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size];
    for (int i = 1; i <= size; i++){
        cin >> a[i];
    }
    for (int j = size; j > 0; j--){
        cout << a[j] << " ";
    }
    return 0;
}