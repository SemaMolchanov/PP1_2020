#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int main(){
    vector<int> div;
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = min(a, b); i >= 1; i--){
        if (a%i == 0 && b%i == 0){
            div.push_back(i);
        }
    }
    cout << div[k-1];
    return 0;
}