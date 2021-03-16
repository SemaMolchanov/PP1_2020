#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double n;
    double frac_sum = 0;
    cin >> n;
    for (double i = 1; i <= n; i++){
        frac_sum += 1/(i * i);
    }
    cout << frac_sum;
    return 0;
}