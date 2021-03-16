#include <iostream>

using namespace std;

int main(){
    int size, max1 = -1e9, max2 = 0;
    cin >> size;
    int m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            cin >> m[r][c];
            if (max1 < m[r][c]){
                max1 = m[r][c];
            }
        }
    }    
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            if (max2 < m[r][c] && m[r][c] != max1){
                max2 = m[r][c];
            }
        }
    }
    cout << max2;
    return 0;
}