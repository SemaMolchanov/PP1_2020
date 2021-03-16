#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    set<int> m;
    int n, gcd;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        m.insert(x);
    }
    set<int>::iterator jt = begin(m);
    if (m.size() == 1){
        cout << *jt;
        return 0;
    }
    set<int>::iterator it = max_element(begin(m), end(m));
    for (int i = 1; i < *it; i++){
        if (all_of(begin(m), end(m), [&i](int x){
            return !(x % i);
        })){
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}