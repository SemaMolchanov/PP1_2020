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
    int min = 1e9;
    int max = -1e9;
    for (i = v.begin(); i != v.end(); i++){
        if (*i < min){
            min = *i;
        }
        if (*i > max){
            max = *i;
        }
    }
    cout << max - min;
    return 0;
}