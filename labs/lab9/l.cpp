#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;



int main(){
    vector<pair<int, int> > v;
    int n, x, y;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x >> y;
        int sum = x + y;
        v.push_back(make_pair(sum, i));
    }
    vector<pair<int, int> >::iterator it;
    /*vector<pair<int, int> >::iterator j;
    for (it = v.begin(); it != v.end(); it++){
        for (j = it + 1; j != v.end(); j++){
            if ((*it).first > (*j).first){
                swap (*it, *j);
            }
        }
    }*/
    sort(v.begin(), v.end());
    for (it = v.begin(); it != v.end(); it++){
        cout << (*it).second << " ";
    }
    return 0;
}