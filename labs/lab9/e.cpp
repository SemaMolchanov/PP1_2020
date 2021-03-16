#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> v;
    for(int i = 0; i < n; ++i){
        string x;
        cin >> x;
        v.push_back(x);
    }
    int cnt1 = 0, cnt = 0;
    for(int i = 0; i < v.size() - 1; ++i){
        if(i != 0){
            if(v[i] == v[i-1]) continue;
        }
        for(int j = i + 1; j < v.size(); ++j){
            if(v[i] == v[j]) cnt++;
        }
        if(cnt == 2){
            cnt1++;
        }
        cnt = 0;
        }
        cout << cnt1;
        return 0;
}

