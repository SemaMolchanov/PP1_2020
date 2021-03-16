#include <iostream>

using namespace std;

int main(){
    int arraySize;
    cin >> arraySize;
    int a[arraySize];
    for (int i = 0; i < arraySize; i++){
        cin >> a[i];
    }
    for (int i = arraySize - 1; i >= 0; i--){
        cout << a[i] <<" ";
    }
    return 0;
}