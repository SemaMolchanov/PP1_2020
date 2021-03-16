#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int in, percent, out;
    cin >> in >> percent >> out;
    in *= 100;
    out *= 100;
    int year = 0;
    while (in < out){
        in += in *(percent/100.);
        year++;
    }
    cout << year;
    return 0;
}