#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

string shrinker(vector<string> v,  vector<string>::iterator vi, vector<string> w, vector<string>::iterator wi){
    for (vi = v.begin(); vi != v.end(); vi++){
        string s;
        s = *vi;
        for (int j; j < s.size(); j++){
            if (s[j] >= 'A' && s[j] <= 'Z'){
                s[j] = s[j] + 32;
            }
        }
    }
    for (wi = w.begin(); wi != w.end(); wi++){
        string s;
        s = *wi;
        for (int j; j < s.size(); j++){
            if (s[j] >= 'A' && s[j] <= 'Z'){
                s[j] = s[j] + 32;
            }
        }
    }
}

int main(){
    vector<string> v;
    vector<string> w;
    int n;
    string a, b;
    cin >> n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back(a);
        w.push_back(b);
    }
    vector<string>::iterator vi;
    vector<string>::iterator wi;
    vector<string> q;
    return 0;
}