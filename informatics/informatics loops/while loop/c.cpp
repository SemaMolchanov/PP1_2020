#include <iostream>

using namespace std;

int main(){
    int n, i = 1, div = 1;
    cin >> n;
    while (i <= n){
        if (i % div == 0){
            cout << i << " ";
            div = i;
        }
        i++;
    }
    return 0;
}