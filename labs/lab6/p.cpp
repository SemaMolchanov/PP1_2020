#include <iostream>

using namespace std;

int positive(int n){
    if (n < 0){
        n = n * -1;
    }
    return n;
}

int main(){
    int n;
    cin >> n;
    cout << positive(n);
    return 0;
}