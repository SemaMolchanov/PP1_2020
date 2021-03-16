#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int left = 0, right = int(s.size()) - 1;
    int cnt = 0;
    while (right > left){
        if(s[left] == s[right]){
            left++;
            right--;
        }
        else{
            cnt++;
            if (cnt >= 2){
                cout << "NO";
                return 0;
            }
            if(s[left+1] == s[right]){
                ++left;
            }
            else if (s[right - 1]==s[left]){
                --right;
            }
            else{
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}