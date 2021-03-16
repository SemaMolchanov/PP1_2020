#include <iostream>
#include <vector>
#include <algorithm>

#define vec_it vector<int>::iterator

using namespace std;

int main(){
    vector<int> v;
    vector<int> w;
    int n1, n2;
    cin >> n1 >> n2;
    int x;
    for (int i = 0; i < n1; i++){
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n2; i++){
        cin >> x;
        w.push_back(x);
    }
    vec_it it = unique(begin(v), end(v));
    vec_it jt = unique(begin(w), end(w));
    v.resize(distance(v.begin(), it));
    w.resize(distance(w.begin(), jt));
    vector<int> result(v.size() + w.size());
    for(int i = 0; i < result.size(); i += 2){
        result[i] = v[i/2];
    }
    for(int i = 1; i < result.size(); i += 2){
        result[i] = w[i/2];
    }
    vec_it rt = unique(begin(result), end(result));
    result.resize(distance(result.begin(), rt));
    for_each(begin(result), end(result), [](int a){
        cout << a << " ";
    });
    return 0;
}