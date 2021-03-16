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

bool distinct(int x){
    string s = to_string(x);
    for (int i = 0; i < s.size();  i++){
        for (int j = i + 1; j < s.size(); j++){
            if (s[i] == s[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    while (true){
        x++;
        if (distinct(x)){
            break;
        }
    }
    cout << x;
    return 0;
}