#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int x = 1 << n;
    int y = 1 << m;
    int z = x^y;
    cout << z;
    return 0;
}