#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    while (true){
        if (n == k){
            break;
        }
        if (k <= n/2){
            if (n % 2 == 1){
                cout << "-1" << endl;
                n--;
            }
            if (n % 2 == 0){
                cout << ":2" << endl;
                n /= 2;
            }
        }
        else{
            cout << "-1" << endl;
            n--;
        }
    }
    return 0;
}