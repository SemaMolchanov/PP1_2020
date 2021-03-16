#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 0;
    while (pow(2, k) < n){
        k++;
    }
    cout << k;
    return 0;
}