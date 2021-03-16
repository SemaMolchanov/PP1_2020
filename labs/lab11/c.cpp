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
    map<string, double> stud;
    vector<pair<double, string> > v;
    string name;
    double score, sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> name >> score;
        sum += score;
        stud[name] += score;
    }
    map<string, double>::iterator it;
    for (it = begin(stud); it != end(stud); it++){
        v.push_back(make_pair(((*it).second/sum)*100, (*it).first));
    }
    sort(begin(v), end(v));
    reverse(begin(v), end(v));
    vector<pair<double, string> >::iterator jt;
    for (jt = v.begin(); jt != v.end(); jt++){
        cout << (*jt).second << " " << (*jt).first << "%" << endl;
    }
    return 0;
}