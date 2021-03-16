#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int arraySize, lowerBound, upperBound;
    cin >> arraySize >> lowerBound >> upperBound;
    int a[arraySize];
    for (int i = 0; i < arraySize ; i++){
        cin >> a[i];
        if (i < lowerBound-1){
            cout << a[i] <<" ";
        }
    }
    for (int k = upperBound-1; k >= lowerBound-1; k--){
        cout << a[k] <<" ";
    }
    for (int j = upperBound; j <= arraySize-1; j++){
        cout << a[j] <<" ";
    }
return 0;
}