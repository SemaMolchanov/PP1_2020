#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    vector<int> v;
    int n, k, x, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
        if (k == x){
            count++;
        }
    }
    cout << count;
    return 0;
}