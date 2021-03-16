#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    vector<pair<string, string> > v;
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        v.push_back(make_pair(s, "new user added"));
    }
    vector<pair<string, string> >::iterator i;
    vector<pair<string, string> >::iterator j;
    for (i = v.begin(); i != v.end(); i++){
        for (j = i + 1; j != v.end(); j++){
            if ((*i).first == (*j).first){
                (*j).second = "user already exists";
            }
        }
    }
    for (i = v.begin(); i != v.end(); i++){
        cout << (*i).second << endl;
    }
    return 0;
}