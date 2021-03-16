#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int>::iterator it = v.begin();
    for (int i = 0; i < k; i++){
        it++;
    }
    rotate(v.begin(), it, v.end());
    /*reverse(v.begin(), v.end());*/
    for_each(v.rbegin(), v.rend(), [](int a){
        cout << a << " ";
    });
    return 0;
}