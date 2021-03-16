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
    for (int i = 0; i < a; i++){
        cout << v[i] << " ";
    }
    for (int i = b; i >= a; i--){
        cout << v[i] << " ";
    }
    for (int i = b + 1; i < n; i++){
        cout << v[i]  << " ";
    }
    return 0;
}