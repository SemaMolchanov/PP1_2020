#include <iostream>

using namespace std;

int main(){
    int row, col, max = -1e9, max_r = -1, r_count = 1;
    cin >> row >> col;
    int m[row][col];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            cin >> m[r][c];
        }
    }
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            if (m[r][c] > max){
                max = m[r][c];
                max_r = r;
            }
        }
    }
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            if (m[r][c] == max && r != max_r){
                r_count++;
            }
        }
    }
    cout << r_count;
    return 0;
}