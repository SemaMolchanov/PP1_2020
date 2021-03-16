#include <iostream>

using namespace std;

int main(){
    int d, c, p, n;
    cin >> d >> c >> p >> n;

    int totalCents = d*100 + c;
    int spentCents = p*n;

cout << (totalCents - spentCents)/100 << " " << (totalCents - spentCents)%100;
return 0;
}