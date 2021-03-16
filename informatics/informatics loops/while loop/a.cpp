#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, i = 1;
    cin >> n;
    while (i * i <= n){
        cout << i * i << endl;
        i++;
    }
    return 0;
}