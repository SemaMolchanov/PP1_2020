#include <iostream>

using namespace std;

int div_and_sum(int n, int sum){
    if (n == 0){
        return sum;
    }
    int rem = n%10;
    sum += rem/2;
    return div_and_sum(n/10, sum);
}

int main(){
    int n;
    cin >> n;
    int sum = 0;
    cout << div_and_sum(n, sum);
    return 0;
}