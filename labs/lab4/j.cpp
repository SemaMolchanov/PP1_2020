#include <iostream>

using namespace std;

int main(){
    int row, column;
    cin >> row >> column;
    int m[row][column];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < column; c++){
            cin >> m[r][c];
            if (((r+c)%2 == 0) || ((r+c) == 0)){
                m[r][c] = m[r][c] + 1;
            }
            if ((r+c)%2 == 1){
                m[r][c] = m[r][c] - 1;
            }
        }
    }
    for (int r = 0; r < row; r++){
        for(int c = 0; c < column; c++){
            cout << m[r][c] <<" ";
        }
        cout << endl;
    }
    return 0;
}