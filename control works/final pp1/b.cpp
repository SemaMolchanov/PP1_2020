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
    map<string, vector<string> > mp;
    string name, cities;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> name;
        getline(cin, cities);
        cities += ' ';
        string tmp = "";
        for (int j = 0; j < cities.size(); j++){
            if (cities[j] != ' '){
                tmp += cities[j];
            }
            if (cities[j] == ' '){
                mp[tmp].push_back(name);
                tmp = "";
            }
        }
    }
    map<string, vector<string> >::iterator it;
    for (it = mp.begin(); it != mp.end(); it++){
        cout << it->first << ": ";
        for_each(it->second.begin(), it->second.end(), [](string s){
            cout << s << " ";
        });
        cout << endl;
    }
    return 0;
}