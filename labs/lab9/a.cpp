#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<pair<int, int> > v;
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    vector<pair<int, int> >::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}