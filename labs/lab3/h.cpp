#include <iostream>

using namespace std;

int main(){
    long arraySize, lowerBound, upperBound;
    cin >> arraySize >> lowerBound >> upperBound;
    long a[arraySize];
    for (long i = 0; i < arraySize; i++){
        cin >> a[i];
    }
    long integralSum = 0;
    for (long i = lowerBound-1; i <= upperBound-1; i++){
        integralSum += a[i];
    }
    cout << integralSum << endl;
    return 0;
}