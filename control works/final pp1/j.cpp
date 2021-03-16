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
    vector<char> s1;
    vector<char> c1;
    vector<char> s2;
    vector<char> c2;
    string s, c;
    cin >> s >> c;
    if (s.size() != c.size()){
        cout << "Understandable have a nice day";
        return 0;
    }
    for (size_t i = 0; i < s.size(); i++){
        s1.push_back(s[i]);
        c1.push_back(c[i]);
        s2.push_back(s[i]);
        c2.push_back(c[i]);
    }
    sort(s2.begin(), s2.end());
    sort(c2.begin(), c2.end());
    bool ok = equal(s2.begin(), s2.end(), c2.begin());
    if (!ok){
        cout << "Understandable have a nice day";
        return 0;
    }
    int count = 0;

    while(true){
        bool ok = equal(s1.begin(), s1.end(), c1.begin());
        if (ok){
            break;
        }
        rotate(c1.begin(), c1.begin() + 1, c1.end());
        count++;
    }
    cout << count;
    return 0;
}