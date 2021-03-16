#include <iostream>

using namespace std;

int main(){
    string s;
    int capCount = 0, smallCount = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            smallCount++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z'){
            capCount++;
        }
    }
    cout << smallCount << " " << capCount;
    return 0;
}