#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    vector<int> w;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        w.push_back(x);
    }
    reverse(begin(w), end(w));
    for (int j = 0; j < n; j++){
        if (v[j] == w[j]){
            cout << "OK" << endl;
        }
        else{
            cout << "Instead of " << v[j] << " here was " << w[j] << endl;
        }
    }
    return 0;
}