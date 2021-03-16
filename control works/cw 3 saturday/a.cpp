#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    map<int, int> banknotes;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        banknotes[x] += 1;
    }
    vector<int> meet;
    int q;
    cin >> q;
    for (int j = 0; j < q; j++){
        int t;
        cin >> t;
        if (banknotes.find(t) == banknotes.end()){
            meet.push_back(0);
        }
        else{
            meet.push_back(banknotes[t]);
        }
    }
    for (int t = 0; t < q; t++){
        cout << meet[t] << endl;
    }
    return 0;
}