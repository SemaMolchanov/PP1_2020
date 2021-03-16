#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

string big_boss(string s, int i){
    if (i == s.size()){
        return "-1";
    }
    string c;
    if (s[i] >= 'A' && s[i] <= 'Z'){
        c = s[i];
        return c;
    }
    return big_boss(s, i + 1);
}

int main(){
    string s;
    cin >> s;
    cout << big_boss(s, 0);
    return 0;
}