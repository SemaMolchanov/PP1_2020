#include <iostream>

using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int m[row][col];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            if (r == 0 || c == 0){
                m[r][c] = 1;
            }
            else{
                m[r][c] = m[r-1][c] + m[r][c-1];
            }
            cout << m[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}