#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int max = 0;
    for(int i = 1; i < s.length(); i++){
        string sub = s.substr(0, i + 1);
        int left = 0;
        int right = i;
        int cnt = 0;
        while(left < right){
            if (sub[left] != sub[right]){
                cnt++;
            }
            left++;
            right--;
        }
        if (cnt != 0 && max < i + 1){
            max = i+1;
            }
    }
    cout << max;
    return 0;
}