#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    cout << "Usual division: " << (float)m / (float)n << endl;
    cout << "Division without remainder: " << m/n << endl;
    cout << "Remainder: " << m%n << endl;
    return 0;
}