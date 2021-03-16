#include <iostream>

using namespace std;

int main(){
    int n;
    double a, power = 1;
    cin >> a >> n;
    for (int i = 0; i < n; i++){
        power *= a;
    }
    cout << power;
    return 0;
}