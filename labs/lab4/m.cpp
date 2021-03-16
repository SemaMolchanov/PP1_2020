#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int m[size][size];
    int l = size, value = 1, p = 0, i;
    while (value <= size*size){
        for (i = p; i < l; i++){
            m[p][i] = value++;
        }
        for (i = p+1; i < l; i++){
            m[i][l-1] = value++;
        }
        for (i = l-2; i >= p; i--){
            m[l-1][i] = value++;
        }
        for ( i = l-2;  i > p; i--){
            m[i][p] = value++;
        }
        p++;
        l = l-1;
    }
    for (i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
        cout << m[i][j] <<" ";
        }
    cout << endl;
    }
    return 0;
}