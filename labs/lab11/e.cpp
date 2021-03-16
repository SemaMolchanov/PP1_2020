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
    map<char, int> m;
    int n, cnt=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        set<char> st;
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            st.insert(s[j]);
        }
        for(set<char>::iterator it = st.begin(); it!=st.end(); it++){
            m[(*it)]++;
        }
    }
    for(map<char, int>::iterator it1 =m.begin(); it1 != m.end(); it1++){
        if(it1->second == n){
            cnt++;
            cout << it1->first << " ";
        }
    }
    if(cnt == 0){
        cout << "NO COMMON CHARACTERS";
    }
    return 0;
}