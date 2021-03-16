#include <iostream>

using namespace std;

int main(){
    int row, col, max = -1e9, max_r = -1, max_c = -1, max_count = 1;
    cin >> row >> col;
    int m[row][col];
    int n[row] = {};
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            cin >> m[r][c];
            n[r] += m[r][c];
            if (m[r][c] > max){
                max = m[r][c];
                max_r = r;
            }
            else if (m[r][c] == max){
                max_count++;
            }
        }
    }
    if (max_count == 1){
        cout << max_r;
    }
    else{
        int n_max = n[0];
        int ind = 0;
        for (int i = 1; i < row; i++){
            if (n[i] > max){
                max = n[i];
                ind = i;
            }
        }
        cout << ind;
    }
    return 0;
}