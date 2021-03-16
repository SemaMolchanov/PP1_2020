#include <iostream>

using namespace std;

int main(){
    int arraySize;
    cin >> arraySize;
    int a[arraySize];
    for (int i = 1; i <= arraySize; i++){
        cin >> a[i];
        if(a[i] != a[i-1]){
            cout << a[i] <<" ";
        }
    }
return 0;
}