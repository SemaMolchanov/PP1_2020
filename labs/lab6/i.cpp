#include <iostream>

using namespace std;

string capital_even(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <= 'z' && i%2 == 0){
            s[i] = s[i] - 32;
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << capital_even(s);
    return 0;
}