#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    cout << "it is " << k/3600 << " hours " << k%3600/60 << " minutes";
    return 0;
}