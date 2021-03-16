#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void to_bin(vector<int> &v, int n){
    if (n == 0){
        return;
    }
    v.push_back(n%2);
    return to_bin(v, n/2);
}

int main(){
    int n;
    cin >> n;
    int tmp = n;
    while (tmp <= 1000000){
        vector<int> v;
        int j = tmp;
        to_bin(v, j);
        if (tmp % n == 0 && all_of(begin(v), end(v), [](int x){
            return (x == 1);
        })){
            for_each(begin(v), end(v), [](int a){
                cout << a;
            });
            return 0;
        }
        tmp += n;
    }
    cout << "NO";
    return 0;
}