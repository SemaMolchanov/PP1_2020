#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a != 0 && b != 0 % b%a == 0){
        cout << -b/a;
    }
    else if (b == 0){
        cout << "INF";
    }
    else if(a == 0){
        cout << "NO";
    }
    return 0;
}