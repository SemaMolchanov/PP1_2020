#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void mirror(vector<char> &v, string c, size_t i){
    if (i == c.size()){
        return;
    }
    if (c[i] == '('){
        v.push_back(')');
    }
    else{
        v.push_back(c[i]);
    }
    return mirror(v, c, i + 1);
}

int main(){
    vector<char> v;
    string s;
    cin >> s;
    string c = s;
    reverse(c.begin(), c.end());
    mirror(v, c, 0);
    for_each(v.begin(), v.end(), [&s](char x){
        s += x;
    });
    cout << s;
    return 0;
}