#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int arraySize, target, d = 0, c;
    cin >> arraySize >> target;
    int a[arraySize];
    for (int i = 1; i <= arraySize ; i++){
        cin >> a[i];
        if (a[i] < target){
            d = i;
        }
        if (a[i] == target){
            cout << i;
            c = a[i];
        }
    }
    if (c != target){
        cout << d;
    }
return 0;
}