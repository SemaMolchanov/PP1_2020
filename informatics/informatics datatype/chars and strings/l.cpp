#include <iostream>

using namespace std;

void julis_cipher(string &s, int &k){
    for (int i = 0; i < s.size(); i++){
        s[i] -= k;
        if (s[i] < 'A'){
            s[i] += 26;
        }
        cout << s[i];
    }
}

int main(){
    string s;
    int k;
    cin >> s >> k;
    julis_cipher(s, k);
    return 0;
}