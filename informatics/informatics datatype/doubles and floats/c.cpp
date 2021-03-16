#include <iostream>
#include <cmath>

using namespace std;

int main (){
    float x, y;
    cin >> x >> y;
    int day = 1;
    float res = x;
    while (x < y){
        x *= 1.7f;
        res += x;
        day++;
    }
    cout << day;
    return 0;
}