#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] < 'z'){
            s[i] = s[i]+1;
            cout << char(s[i]);
        }
        else if (s[i] == 'z'){
            s[i] = s[i]-25;
            cout << char(s[i]);
        }
    }
    return 0;
}