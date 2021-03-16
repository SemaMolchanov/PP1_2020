#include <iostream>
#include <set>

using namespace std;

int main(){
    set<char> c;
    char repeat;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (c.find(s[i]) == c.end()){
            c.insert(s[i]);
        }
        else{
            repeat = s[i];
        }
    }
    cout << repeat;
    return 0;
}