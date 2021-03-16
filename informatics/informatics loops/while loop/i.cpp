#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int f0 = 0, f1 = 1, i = 0;
    while (f0 < n){
        int next = (f0 + f1);
        f0 = f1;
        f1 = next;
        i++;
    }
    if (f0 == n){
        cout << i;
    }
    else{
        cout << -1;
    }
    return 0;
}