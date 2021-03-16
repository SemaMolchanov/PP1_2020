#include <iostream>

using namespace std;

int digits_count(string s, int cnt, int i){
    if (i == s.size()){
        return cnt;
    }
    if (s[i] >= '0' && s[i] <= '9'){
        cnt++;
    }
    return digits_count(s, cnt, i+1);
}

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    cout << digits_count(s, cnt, 0);
    return 0;
}