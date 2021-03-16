#include <iostream>

using namespace std;

int main(){
    int n,a,b,c,d; 
    cin >> n;
    a = n%2;
    n = n/2;
    b = n%2;
    n = n/2;
    c = n%2;
    n = n/2;
    d = n%2;
    cout << d + c*2 + b*4 + a*8 << endl;
    return 0;
}