#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
    int n, y, sum=0;
    cin >> n;
    vector<int> v1, v2, v3;
    v1.reserve(n);
    for(int i = 0; i < n; i++){
        cin >> y;
        v1.push_back(y);
    }
    sort(v1.begin(), v1.end());
   for(int i = 0; i < n; i++){
        if(v1[i] != v1[i + 1]){
            v2.push_back(v1[i]);
       }
    }
    for(int i =0; i < v2.size(); i++){
        if(v2[i]%2 != 0){
            v3.push_back(v2[i]);
        }
    }
    for(int i = 0; i < v3.size();i++){
        cout << v3[i] << " ";
    }
}