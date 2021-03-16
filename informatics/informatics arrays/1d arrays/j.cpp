#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size];
    cin >> a[0];
     int maxi = a[0];
    for (int i = 1; i < size; i++){
        cin >> a[i];
        if (a[i] > maxi){
            maxi = a[i];
        }
    }
    cout << maxi;
    return 0;
}