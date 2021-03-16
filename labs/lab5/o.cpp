#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sMax = s[0];
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <='z' && s[i] > sMax){
            sMax = s[i];
        }
    }
    cout << char(sMax);
    return 0;
}