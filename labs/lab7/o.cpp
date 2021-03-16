#include <iostream>
using namespace std;

void to_k_inary_converter(int n, int k){
    if (n == 0){
        return;
    }
    to_k_inary_converter(n / k, k);
    int c = n % k;
    if (c > 9){
        cout << char(55 + c);
        return;
    }
    cout << char(c + 48);
}

int main(){
    int n, k;
    cin >> n >> k;
    to_k_inary_converter(n, k);
return 0;
}