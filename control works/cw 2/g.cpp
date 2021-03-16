#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    char alpha[26];
    for(int i = 0; i < 26; i++){
        alpha[i] = (char)(97 + i);
    }
    int counters[26];
    for(int i = 0; i < 26; i++){
        counters[i] = 0;
    }
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < 26; j++){
            if (alpha[j] == s[i]){
                if (counters[j] > 0){
                    cout << s[i];
                }
                counters[j] = counters[j] + 1;
            }
        }
    }
    return 0;
}