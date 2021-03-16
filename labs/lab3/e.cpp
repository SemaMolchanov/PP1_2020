#include <iostream>

using namespace std;

int main(){
    long arraySize;
    cin >> arraySize;
    long a[arraySize];
    long sum = 0;
    for (long i = 0; i < arraySize; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}