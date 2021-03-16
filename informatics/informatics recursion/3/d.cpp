#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void scan(int n, int cnt, string &s){
    if (cnt == n){
        return;
    }
    char k;
    cin >> k;
    s += k;
    cnt++;
    return scan(n, cnt, s);
}

int main(){
    int n;
    string s = "";
    cin >> n;
    int cnt = 0;
    scan(n, cnt, s);
    reverse(s.begin(), s.end());
    for (size_t i = 0; i < s.size(); i++){
        cout << s[i] - '0' << " ";
    }
    return 0;
}