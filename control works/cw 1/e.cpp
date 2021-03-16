#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    sum += n/100;
    sum += n%10;
    sum += n/10%10;

cout << sum;
return 0;
}