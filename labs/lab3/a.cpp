#include <iostream>

using namespace std;

int main(){
    int n, a;
    cin >> n;
    int odd;
    for (int x = 1; x<=n; x++){
        cin >> a;
        if (a%2 == 1){
            odd = a;
            cout << odd <<" ";
            }
    }
    
    return 0;
}