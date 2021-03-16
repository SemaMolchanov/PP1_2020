#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n > 0){
        int r = n % 10;
        cout << r;
        n /= 10;
    }
    return 0;
}