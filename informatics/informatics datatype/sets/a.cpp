#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        m.insert(x);
    }
    cout << m.size();
    return 0;
}