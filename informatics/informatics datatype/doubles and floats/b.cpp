#include <iostream>
#include <cmath>

using namespace std;

int main (){
    float x, y;
    cin >> x >> y;
    int day = 1;
    while (x < y){
        x *= 1.7f;
        day++;
    }
    cout << day;
    return 0;
}