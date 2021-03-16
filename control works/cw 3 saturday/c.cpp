#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    map<string, int> calc;
    vector<pair<string, int> > v;
    char s;
    string l1, l2;
    string s_str;
    int n1, n2;
    int num;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++){
        cin >> s;
        cin >> l1 >> n1 >> l2 >> n2;
        if (s == '+'){
            s_str = l1 + " + " + l2;
            num = n1 + n2;
        }
        if (s == '-'){
            s_str = l1 + " - " + l2;
            num = n1 - n2;
        }
        if (s == '*'){
            s_str = l1 + " * " + l2;
            num = n1 * n2;
        }
        v.push_back(make_pair(s_str, num));
    }
    vector<pair<string, int> >::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << (*it).first << " = " << (*it).second << endl;
    }
    return 0;
}