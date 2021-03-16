#include <iostream>

using namespace std;

int main(){
    int prev, next, sum;
    cin >> prev;
    sum = prev;
    while (true){
        cin >> next;
        if (next == 0 && prev == 0){
            break;
        }
        sum += next;
        prev = next;
    }
    cout << sum;
    return 0;
}