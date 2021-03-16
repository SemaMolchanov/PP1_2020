#include <iostream>

using namespace std;

int main(){
    int n, sq_sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++){
        sq_sum += i*i;
    }
    cout << sq_sum;
    return 0;
}