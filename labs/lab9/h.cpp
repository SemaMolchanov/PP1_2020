#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    vector<pair<string, int> > v;
    int n;
    string s;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> s;
        v.push_back(make_pair(s, i));
    }
    vector<pair<string, int> >::iterator i;
    vector<pair<string, int> >::iterator j;
    for (i = v.begin(); i != v.end(); i++){
        for (j = i + 1; j != v.end(); j++){
            if ((*i).first == (*j).first){
                (*j).second = (*i).second;
            }
        }
    }
    map<string, int> w;
    w.insert(v.begin(), v.end());
    map<string, int>::iterator it;
    for(it = w.begin(); it != w.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}