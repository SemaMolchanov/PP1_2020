#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int f0 = 0, f1 = 1, i = 0;
    while (i < n){
        int next = (f0 + f1);
        f0 = f1;
        f1 = next;
        i++;
    }
    cout << f0;
    return 0;
}