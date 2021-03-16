#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int arraySize;
    cin >> arraySize;
    int a[arraySize];
    int square = 0;
    for (int i = 0; i < arraySize; i++){
        cin >> a[i];
        square = a[i]*a[i];
        cout << square <<" ";
    }
    return 0;
}