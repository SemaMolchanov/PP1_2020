#include <iostream>

using namespace std;

int main(){
    int n, premax = 0, max = 0;
    cin >> max;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        if (n > max){
            premax = max;
            max = n;
        }
        else if (n > premax){
            premax = n;
        }
    }
    cout << premax;
    return 0;
}