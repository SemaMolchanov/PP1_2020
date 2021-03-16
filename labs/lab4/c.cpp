#include <iostream>

using namespace std;

int main(){
    int row, column, count = 0;
    cin >> row >> column;
    int m[row][column];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < column; c++){
            cin >> m[r][c];
            if (m[r][c] < 0){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}