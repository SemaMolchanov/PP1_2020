#include <iostream>

using namespace std;

int main(){
    int n, k, zero_cnt = 0, pos_cnt = 0, neg_cnt = 0;
    cin >> k;
    for (int i = 1; i <= k; i++){
        cin >> n;
        if (n == 0){
            zero_cnt++;
        }
        else if (n > 0){
            pos_cnt++;
        }
        else if (n < 0){
            neg_cnt++;
        }
    }
    cout << zero_cnt << " " << pos_cnt << " " << neg_cnt;
    return 0;
}