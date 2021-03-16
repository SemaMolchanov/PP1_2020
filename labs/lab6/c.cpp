#include <iostream>
#include <cmath>
using namespace std;


void scanarr(int *a, int size){
    int x;
    for(int i = 1; i <= 100; i++){
        a[i] = 0;
    }
    for(int i = 0; i < size; i++){
        cin >> x;
        a[x]++;
    }
}

int same_elements_count(int *a, int *b){
    int count = 0;
    for(int i = 1; i <= 100; i++){
        count += min(a[i], b[i]);
    }
    return count;
}

int main(){
    int size;
    cin >> size;
    int a[101], b[101];
    scanarr(a, size);
    scanarr(b, size);
    cout << same_elements_count(a, b);
    return 0;
}