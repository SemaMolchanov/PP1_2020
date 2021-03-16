#include <iostream>
#include <cmath>

using namespace std;

bool palindrome(int left, int right, string s, int cnt){
    if (left <= right){
        if (s[left] != s[right]){
            return false;
        }
        if (cnt == ceil(s.size()/2)){
            return true;
        }
        if (s[left] == s[right]){
            cnt++;
        }
    }
    return palindrome(left + 1, right - 1, s, cnt);
}

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    cout << (palindrome(0, s.size() - 1, s, cnt) ? "Yes" : "No");
    return 0;
}