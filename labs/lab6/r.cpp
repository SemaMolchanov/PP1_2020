#include <iostream>

using namespace std;

char to_upper(char c){
    if (c >= 'a' && c <= 'z'){
        c = c - 32;
    }
    return c;
}

int main(){
    char c;
    cin >> c;
    cout << to_upper(c);
    return 0;
}