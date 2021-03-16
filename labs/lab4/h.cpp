#include <iostream>

using namespace std;

int main(){
    int row, column, sum = 0, sum1 = 1e9, index;
    cin >> row >> column;
    int m[row][column];
    for (int r = 0; r < row; r++){
        for (int c = 0; c < column; c++){
            cin >> m[r][c];
            sum += m[r][c];
        }
        if (sum < sum1){
            sum1 = sum;
            index = r;
        }
        sum = 0;
    }
    cout << index+1;
    return 0;
}