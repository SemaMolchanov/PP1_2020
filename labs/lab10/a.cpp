#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> name;
    vector<int> mark;
    vector<pair<string, int> > result;
    int k;
    cin >> k;
    for (int t = 0; t < k; t++){
        int m;
        string n;
        cin >> n >> m;
        name.push_back(n);
        mark.push_back(m);
    }
    sort(begin(name), end(name));
    sort(begin(mark), end(mark));
    for (int i = 0; i < k; i++){
        result.push_back(make_pair(name[i], mark[i]));
    }
    vector<pair<string, int> >::iterator it;
    for (it = begin(result); it != end(result); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}