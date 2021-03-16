#include <iostream>

using namespace std;

unsigned char letter_up(char &c){
    if (c >= 'a' && c <= 'z'){
        return c - ' ';
    }
    else{
        return c;
    }
}

int main(){
    char c;
    cin >> c;
    cout << letter_up(c);
    return 0;
}