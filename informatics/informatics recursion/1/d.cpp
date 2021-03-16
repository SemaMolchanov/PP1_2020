#include <iostream>

using namespace std;

void star(string s, int i){
    if (i == s.size() - 1){
        cout << s[i];
        return;
    }
    cout << s[i] << "*";
    return star(s, i + 1);
}

int main(){
    string s;
    cin >> s;
    star(s, 0);
    return 0;
}