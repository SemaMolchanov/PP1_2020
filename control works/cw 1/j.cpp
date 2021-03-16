#include <iostream>

using namespace std;

int main(){
    float T, P, Y;
    cin >> T >> P >> Y;
    int years = 0;
    while (T < Y){
        years = years + 1;
        T = float(int(T * (1 + P/100)));
} 
    cout << years;
return 0;
}