#include <iostream>

using namespace std;

int main(){
    int n, d;
    cin >> n;
    d = ((n%100) - (n%10))/10;
    cout << d;
    return 0;
}