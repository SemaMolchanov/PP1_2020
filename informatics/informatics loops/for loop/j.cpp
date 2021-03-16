#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    for (int i = 1; i <= 100; i++){
        cin >> n;
        sum += n;
    }
    cout << sum;
    return 0;
}