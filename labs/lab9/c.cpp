#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    map<int, int> w;
    int n, x, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        w[x] += 1;
        if (w[x] == 2){
            count++;
        }
    }
    cout << count;
    return 0;
}