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
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int>::iterator it = max_element(v.begin(), v.end());
    int maxi = *it;
    int sum = 0; int count = 1;
    for_each(it + 1, v.end(), [&sum, &count](int a){
        sum += a;
        count++;
    });
    if (sum - maxi <= 0){
        cout << count;
    }
    else{
        cout << 1;
    }
    return 0;
}