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
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++){
        if (i < a || i > b){
            cout << v[i] << " ";
        }
    }
    return 0;
}