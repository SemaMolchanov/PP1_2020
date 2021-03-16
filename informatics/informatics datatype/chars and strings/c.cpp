#include <iostream>

using namespace std;

char change_register(char &c){
    if (c >= 'a' && c <= 'z'){
        return c - ' ';
    }
    return ((c >= 'A') && (c <= 'Z')) ? c + ' ' : c;
}

int main(){
    char c;
    cin >> c;
    cout << change_register(c);
    return 0;
}