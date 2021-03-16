#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int km_per_day, distance;
    cin >> km_per_day >> distance;

    cout << ceilf (distance / (km_per_day + 0.));
    return 0;
}