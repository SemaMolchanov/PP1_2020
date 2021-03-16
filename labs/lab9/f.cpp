#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

bool correct_brackets(string s, int i, int l_br, int r_br){
    if (i == s.size()){
        if (s[0] == '(' && s[s.size() - 1] == ')' && l_br == r_br){
            return true;
        }
        else{
            return false;
        }
    }
    if (s[i] == '('){
        l_br++;
    }
    else if (s[i] == ')'){
        r_br++;
    }
    return correct_brackets(s, i + 1, l_br, r_br);
}

int main(){
    string s;
    cin >> s;
    int l_br = 0, r_br = 0;
    cout << (correct_brackets(s, 0, l_br, r_br) ? "YES" : "NO");
    return 0;
}