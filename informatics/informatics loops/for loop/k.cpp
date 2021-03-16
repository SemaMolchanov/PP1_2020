#include <iostream>

using namespace std;

int main(){
    int n, k, sum = 0;
    cin >> k;
    for (int i = 1; i <= k; i++){
        cin >> n;
        sum += n;
    }
    cout << sum;
    return 0;
}