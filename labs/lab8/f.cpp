#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    vector<int> v;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    vector<int>::iterator i;
    int a, b;
    cin >> a >> b;
    i = v.begin() + a;
    v.insert(i, b);
    for (i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }
    return 0;
}