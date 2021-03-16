#include <iostream>

using namespace std;

int main(){
    int row, col, max = -1e9, max_r = -1, max_c = -1;
    cin >> row >> col;
    int m[row][col];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            cin >> m[r][c];
            if (m[r][c] > max){
                max = m[r][c];
                max_r = r;
                max_c = c;
            }
        }
    }
    cout << max << endl;
    cout << max_r << " " << max_c << endl;
    return 0;
}