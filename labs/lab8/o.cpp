#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string shrink_letters(string s, int i){
    if (i == s.size()){
        return s;
    }
    if (s[i] >= 'A' && s[i] <= 'Z'){
        s[i] = s[i] + 32;
    }
    return shrink_letters(s, i + 1);
}

int main(){
    string s;
    cin >> s;
    string c = shrink_letters(s, 0);
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size(); i++){
        for (int j = i + 1; j < c.size(); j++){
            if (c[i] == c[j]){
                c[j] = ' ';
            }
        }
    }
    int count = 0;
    for (int i = 0; i < c.size(); i++){
        if (c[i] == ' '){
            count++;
        }
    }
    cout << c.size() - count << endl;
    for (int i = 0; i < c.size(); i++){
        if (c[i] != ' '){
            cout << c[i] << " ";
        }
    }
    return 0;
}