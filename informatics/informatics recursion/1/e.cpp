#include <iostream>

using namespace std;

void for_odd_brackets(string s, int i){
    if (i == s.size() - 1){
        cout << s[i];
        return;
    }
    if (i < s.size()/2){
        cout << s[i] << "(";
    }
    else if (i >= s.size()/2 && i < s.size() - 1){
        cout << s[i] << ")"; 
    }
    return for_odd_brackets(s, i + 1);
}

void for_even_brackets(string s, int i){
    if (i == s.size() - 1){
        cout << s[i];
        return;
    }
    if (i == 0){
        cout << s[i];
    }
    else if (i > 0 && i < s.size()/2){
        cout << "(" << s[i];
    }
    else if (i >= s.size()/2 && i < s.size() - 1){
        cout << s[i] << ")";
    }
    return for_even_brackets(s, i + 1);
}

int main(){
    string s;
    cin >> s;
    if (s.size() % 2 == 0){
        for_even_brackets(s, 0);
    }
    else{
        for_odd_brackets(s, 0);
    }
    return 0;
}