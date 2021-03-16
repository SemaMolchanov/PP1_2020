#include <iostream>

using namespace std;

int main(){
    int n, max = -1e9, count = 0;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        if (n > max){
            max = n;
            count = 1;
        }
        else if (n == max){
            count++;
        }
    }
    cout << count;
    return 0;
}