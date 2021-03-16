#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    int count = 0;
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++){
        if (*i == k){
            count++;
        }
    }
    cout << ((count != 0) ? "Yes" : "No");
    return 0;
}