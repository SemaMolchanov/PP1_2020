#include <iostream>

using namespace std;

int main(){
    int n, min = 1e9, max = -1e9;
    cin >> n;
    while (n > 0){
        int r = n % 10;
        if (r > max){
            max = r;
        }
        if (r < min){
            min = r;
        }
        n /= 10;
    }
    cout << min << " " << max;
    return 0;
}