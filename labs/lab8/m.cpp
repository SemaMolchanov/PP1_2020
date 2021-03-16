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
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++){
        for (vector<int>::iterator j = i + 1; j != v.end(); j++){
            if (*i == *j){
                *j = 0;
            }
        }
    }
    int sum = 0;
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++){
        sum += *i;
    }
    cout << sum;
    return 0;
}