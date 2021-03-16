#include <iostream>

using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int m[row][col];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            cin >> m[r][c];
        }
    }
    for (int c = 0; c < col; c++){
        for (int r = 0; r < row; r++){
            cout << m[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}