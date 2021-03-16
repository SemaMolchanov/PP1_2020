#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    set<int> m;
    vector<string> v;
    int x;
    while (cin >> x){
        if (m.find(x) == m.end()){
            m.insert(x);
            v.push_back("NO");
        }
        else{
            v.push_back("YES");
        }
    }
    for_each(v.begin(), v.end(), [](string s){
        cout << s << endl;
    });
    return 0;
}