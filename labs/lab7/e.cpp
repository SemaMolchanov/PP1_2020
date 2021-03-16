#include <iostream>

using namespace std;

bool two(int n){
    if (n == 2 || n == 1){
        return true;
    }
    if (n%2 == 1){
        return false;
    }
    return two(n/2);
}

int main(){
    int n;
    cin >> n;
    cout << (two(n) ? "Yes" : "No");
    return 0;
}