#include <iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin >> sizeOfArray;
    int a[sizeOfArray];
    int count = 0;

    for (int i = 0; i < sizeOfArray; i++){
        cin >> a[i];
        if (a[i] > 0){
        count++;
        }
    }
    cout << count;
    return 0;
}