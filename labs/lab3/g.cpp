#include <iostream>

using namespace std;

int main(){
    int arraySize, maxIndex, minIndex, max = -1e9, min = 1e9, maxToMin;
    cin >> arraySize;
    int a[arraySize];
    for(int i = 0; i < arraySize ; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
            maxIndex = i;
        }
        if(a[i] < min){
            min = a[i];
            minIndex = i;
        }
    }
    for(int i = 0; i < arraySize; i++){
        maxToMin = i;
        if(a[i] == max){
            a[maxToMin] = min;
        }
        cout << a[maxToMin] <<" ";
    }
return 0;
}