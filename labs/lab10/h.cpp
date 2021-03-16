#include <iostream>
#include <vector>
#include <algorithm>

#define v_it vector<int>::iterator

using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v_it it = find(begin(v), end(v), x);
        if (it == end(v)){
            v.push_back(x);
        }
    }
    do{
        for( int i = 0; i < v.size(); i += 1 ){
            cout << v[i] << " ";
        }
        cout << endl;
    }while (next_permutation(v.begin(), v.end()));
    return 0;
}