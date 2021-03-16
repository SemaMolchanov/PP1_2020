#include <iostream>

using namespace std;

int main(){
    int n, length = 0;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        length++;
    }
    cout << length;
    return 0;
}