#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int row, column, root = 0;
    cin >> row >> column;
    int m[row][column];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < column ; c++){
            cin >> m[r][c];
            root = sqrt(m[r][c]);
            if (m[r][c] == root*root){
                m[r][c] = sqrt(m[r][c]);
            }
        }
    }
    for (int r = 0; r < row; r++){
        for (int c = 0; c < column; c++){
            cout << m[r][c] <<" ";
        }
        cout << endl;
    }
    return 0;
}