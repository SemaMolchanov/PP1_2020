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
    map<string, string>  usernames;
    map<string, string>::iterator it;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string old, changed;
        cin >> old >> changed;
        for (it = usernames.begin(); it != usernames.end(); it++){
            if (old == it->second){
                usernames.insert(make_pair(it->first, changed));
            }
            else{
                usernames.insert(make_pair(old, changed));
            }
        }
    }
    map<string, string>::iterator jt;
    cout << usernames.size();
    for (jt = usernames.begin(); jt != usernames.end(); jt++){
        cout << (*jt).first << ' ' << (*jt).second << endl;
    }
    return 0;
}