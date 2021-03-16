#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;


bool is_palindrome(string s){
    for(int i = 0; i < s.size()/2; i++){
        if(s[i] != s[s.size()-1 - i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    bool palindrome = false;
    do{
        if(is_palindrome(s)){
            palindrome = true;
            break;
        }
    }while (next_permutation(s.begin(), s.end()));
    cout << ((palindrome) ? "ZA WARUDO TOKI WO TOMARE" : "JOJO");
    return 0;
}