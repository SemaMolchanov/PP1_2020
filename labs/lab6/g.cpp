#include <iostream>

using namespace std;

void vowel_remover(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] != 'a' && s[i] != 'A' && s[i] != 'o' && s[i] != 'O' && s[i] != 'e' && s[i] != 'E' && s[i] != 'i' && s[i] != 'I' && s[i] != 'u' && s[i] != 'U'){
            cout << s[i];
        }
    }
}

int main(){
    string s;
    getline (cin, s);
    vowel_remover(s);
    return 0;
}