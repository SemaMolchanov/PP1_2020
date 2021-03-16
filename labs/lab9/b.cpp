#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

void decreasing_even(vector<int> v, vector<int>::iterator it){
    reverse(v.begin(), v.end());
    for (it = v.begin(); it != v.end(); it++){
        if (*it % 2 == 0){
            cout << *it << " ";
        }
    }
}

void increasing_odd(vector<int> v, vector<int>::iterator it){
    for (it = v.begin(); it != v.end(); it++){
        if (*it % 2 != 0){
            cout << *it << " ";
        }
    }
}

int main(){
    vector<int> v;
    vector<int>::iterator it;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    decreasing_even(v, it);
    increasing_odd(v, it);
    return 0;
}