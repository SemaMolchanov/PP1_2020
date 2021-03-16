#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    map<string, int> q;
    map<string, int>::iterator it;
    int n, k;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s >> k;
        q[s] += k;
    }
    map<string, int>::iterator i;
    for (it = q.begin(); it != q.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}