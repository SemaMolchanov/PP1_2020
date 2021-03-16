#include <iostream>

using namespace std;

int main(){
    double n, k;
    int day = 1;
    cin >> n >> k;
    while (true){
        if (n >= k){
            cout << day;
            break;
        }
        n = n + (n/10);
        day++;
    }
    return 0;
}