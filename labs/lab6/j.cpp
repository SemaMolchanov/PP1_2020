#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d){
    int arr[4];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    int max = arr[0];
    for (int i = 0; i < 4; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d);
    return 0;
}