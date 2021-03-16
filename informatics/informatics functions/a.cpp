#include <iostream>

using namespace std;
int arr[4];

int min_of_four(int a, int b, int c, int d){
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    int min = 1e9;
    for (int i = 0; i < 4; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min_of_four(a, b, c, d);
    return 0;
}