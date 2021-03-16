#include <iostream>

using namespace std;

int main(){
    int m, k;
    int n;   
    cin >> n;   
    for (m = 2; m < n; m++){
        for (k = 2; k <= (m/k); k++)
        if (!(m%k)) break;
        if (k > (m/k)) cout << m << " is prime\n";   
    }   
    return 0;
}