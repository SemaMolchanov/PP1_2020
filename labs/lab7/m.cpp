#include <iostream>

using namespace std;

void previous(int n){
    if (n == 0){
        return;
    }
    previous(n-1);
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    previous(n);
    return 0;
}