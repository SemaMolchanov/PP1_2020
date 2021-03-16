#include <iostream>

using namespace std;

bool exclusive_or(bool a, bool b){
    if (a == b){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    bool a, b;
    cin >> a  >> b;
    cout << exclusive_or(a, b);
    return 0;
}
