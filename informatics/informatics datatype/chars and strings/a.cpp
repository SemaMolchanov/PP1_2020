#include <iostream>

using namespace std;

bool is_digit(char &c){
    if (c >= '0' && c <= '9'){
        return true;
    }
    return false;
}

int main(){
    char c;
    cin >> c;
    cout << ((is_digit(c)) ? "yes" : "no");
    return 0;
}