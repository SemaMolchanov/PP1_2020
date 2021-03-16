#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int summator(int x, int n){
    if (x == 1){
        return n;
    }
    int max_div = 0;
    for (int i = 0; i < x; i++){
        if (x%i == 0){
            n++;
            max_div = i;
        }
    }
    x = max_div;
    return summator(x, n);
}

int main(){
    int x, n = 0;
    cin >> x;
    cout << summator(x, n);
    return 0;
}