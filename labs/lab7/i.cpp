#include <iostream>

using namespace std;

int zero(int sum){
    int n;
    cin >> n;
    if (n == 0){
        return sum;
    }
    sum += n;
    return zero(sum);
}

int main(){
    int sum = 0;
    cout << zero(sum);
    return 0;
}