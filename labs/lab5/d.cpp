#include <iostream>

using namespace std;

int main(){
    string  s;
    cin >> s;
    bool ok = true;
    for (int f = 0, l = s.size()-1; f < l; f++, l--){
        if (s[f] != s[l]){
            ok = false;
        }
    }
    if (ok == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}