#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, power_sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++){
        power_sum += pow(2, i);
    }
    cout << power_sum;
    return 0;
}