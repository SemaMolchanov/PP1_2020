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
    int n;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++){
        s[i] = s[i] + n;
        if (s[i] > 'Z'){
            s[i] = s[i] - 26;
        }
    }
    cout << s;
    return 0;
}