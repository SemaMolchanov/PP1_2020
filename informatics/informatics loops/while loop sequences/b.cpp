#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        sum += n;
    }
    cout << sum;
    return 0;
}