#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a, geom_sum = 0;
    int n;
    cin >> a >> n;
    for (int i = 0; i <= n; i++){
        geom_sum += pow(a, i);
    }
    cout << geom_sum;
    return 0;
}