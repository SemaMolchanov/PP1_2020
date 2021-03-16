#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    set<int> m1;
    set<int> m2;
    int x;
    while (cin >> x){
        m1.insert(x);
    }
    int y;
    while (cin >> y){
        m2.insert(y);
    }
    int count = 0;
    for_each(m1.begin(), m1.end(), [&m2, &count](int x){
        if (m2.find(x) != m2.end()){
            count++;
        }
    });
    cout << count;
    return 0;
}