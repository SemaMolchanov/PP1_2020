#include <iostream>

using namespace std;

int arr[35];

int degree_two(int n){
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return 2;
    }
    arr[n] = 2 * degree_two(n-1);
    return arr[n];
}

int main(){
    int n;
    cin >> n;
    cout << degree_two(n) << endl;
    return 0;
}