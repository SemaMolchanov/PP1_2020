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

int main(){
    string s;
    string c[10010] = {""};
    int j = 0;
    while (getline(cin, s)){
        for (int i = 0; i < s.size(); i++){
            if (s[i] != ' '){
                c[j] += s[i];
            }
            if (s[i] == ' '){
                j++;
            }
        }
    }
    string max = "";
    for (int t = 0; t < 10010; t++){
        if (c[t] > max){
            max = c[t];
        }
    }
    return 0;
}