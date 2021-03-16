#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    set<int> m1;
    set<int> m2;
    set<int> m3;
    int x;
    while (cin >> x){
        m1.insert(x);
    }
    int y;
    while (cin >> y){
        m2.insert(y);
    }
    set_intersection(m1.begin(), m1.end(), m2.begin(), m2.end(), inserter(m3, m3.begin()));
    for_each(m3.begin(), m3.end(), [](int x) {
        cout << x << " ";
    });
    return 0;
}