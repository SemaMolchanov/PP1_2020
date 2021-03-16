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

#define m_it map<string, set<int> >::iterator

using namespace std;

int main(){
    map<string, set<int> > m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        int x;
        cin >> s >> x;
        m[s].insert(x);
    }
    m_it it;
    for(it = m.begin();it != m.end(); it++){
        cout << (*it).first << " ";
        if(((*it).second).size() >= 3){
            cout << "+1" << endl;
        }
        else{
            cout << " NO BONUS" << endl;
        }
    }
return 0;
}