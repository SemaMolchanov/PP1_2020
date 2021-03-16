#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n/1000;
    int b = (n%1000)/100;
    int c = (n/10)%10;
    int d = n%10;
    cout << ((a*10 + b)-(c + d*10)+1);
    return 0;
}