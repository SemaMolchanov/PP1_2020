#include <iostream>

using namespace std;

bool bin_search (int left, int right, int arr[], int n){
    if (left <= right){
        int mid = (left + right)/2;
        if (arr[mid] == n){
            return true;
        }
        if (arr[mid] < n){
            return bin_search(mid + 1, right, arr, n);
        }
        else if (arr[mid] > n){
            return bin_search(left, mid - 1, arr, n);
        }
    }
    return false;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int n;
    cin >> n;
    cout << (bin_search (0, size - 1, arr, n) ? "Yes" : "No");
    return 0;
}