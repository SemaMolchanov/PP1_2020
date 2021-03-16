#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, cnt = 0, sum = 0;
    cin >> n;
    for (int i = n; i > 0; i /= 10){
        cnt++;
    }
    int place = cnt - 1;
    for (; n > 0; n /= 10){
        int r = n%10;
        int k = r*pow(2, place);
        sum += k;
        place--;
    }
    cout << sum;
    return 0;
}