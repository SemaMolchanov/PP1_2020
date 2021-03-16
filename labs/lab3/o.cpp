#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int arraySize, sorter;
    cin >> arraySize;
    int a[arraySize];
    for (int i = 0; i < arraySize; i++){
        cin >> a[i];
    }
    for (int i = 0; i < arraySize-1; i++){
        for (int j = 0; j < arraySize-i-1; j++){
            if(a[j] < a[j+1]){
                sorter = a[j];
                a[j] = a[j+1];
                a[j+1] = sorter;
            }
        }
    }
    for (int i = 0; i < arraySize; i++){
        cout << a[i] <<" ";
    }
return 0;
}