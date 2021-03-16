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
    vector<pair<string, string> > mt;
    set<string> av;
    set<string> p;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++){
        string c;
        cin >> c;
        av.insert(c);
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        string s, t;
        cin >> s >> t;
        mt.push_back(make_pair(s, t));
    }
    string ing;
    cin >> ing;
    int count = 0;
    vector<pair<string, string> >::iterator it;
    for (it = mt.begin(); it != mt.end(); it++){
        if ((*it).first == ing){
            p.insert((*it).second);
            count++;
        }
        if ((*it).second == ing){
            p.insert((*it).first);
            count++;
        }
    }
    cout << count << endl;
    for_each(p.begin(), p.end(), [](string x){
        cout << x << " ";
    });
    return 0;
}