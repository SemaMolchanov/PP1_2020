#include <iostream>

using namespace std;

int even(string s, int cnt, int i){
    if (i > s.size() - 1){
        return cnt;
    }
    if (s[i]%2 == 0){
        cnt++;
    }
    return even(s, cnt, i+1);
}

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    cout << even(s, cnt, 0);
    return 0;
}