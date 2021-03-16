#include <iostream>

using namespace std;

int main(){
    int v, t, location;
    cin >> v >> t;
    if (v > 0){
        location = (v*t)%109;
    }
    if (v < 0){
        location = (109 + (v*t)%109)%109;
    }
    cout << location;
    return 0;
}