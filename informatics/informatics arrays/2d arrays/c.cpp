#include <iostream>

using namespace std;

int main(){
    int man, attempt;
    cin >> man >> attempt;
    int a[man][attempt];
    int b[man] = {};
    for (int i = 0; i < man; i++){
        for (int j = 0; j < attempt; j++){
            cin >> a[i][j];
            b[i] += a[i][j];
        }
    }
    int max = b[0];
    int ind = 0;
    for (int i = 1; i < man; i++){
        if (b[i] > max){
            max = b[i];
            ind = i;
        }
    }
    cout << max << endl;
    cout << ind << endl;
    return 0;
}