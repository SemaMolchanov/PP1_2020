#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool cheater(int arr[], int n, int k, int i){
    if (i == n - 1){
        return false;
    }
    if ((arr[i+1] - arr[i] <= k)){
        return true;
    }
    return cheater(arr, n, k, i+1);
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << (cheater(arr, n, k, 0) ? "cheater" : "no");
    return 0;
}