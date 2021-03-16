#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int m[row][col];
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            cin >> m[r][c];
        }
    }
    if (row < 2 || col < 2){
        cout << "YES";
        return 0;
    }
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            if(r < row - 1 && c < col - 1 && m[r][c] == 0){
                if(m[r + 1][c] == 0 && m[r][c + 1] == 0 && m[r + 1][c + 1] == 0){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}