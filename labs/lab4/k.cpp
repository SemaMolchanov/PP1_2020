#include <iostream>

using namespace std;

int main(){
    int row, column, sum;
    cin >> row >> column;
    int m[row][column];
    for(int r = 1; r <= row; ++r){
        for (int c = 1; c <= column; ++c){
            cin >> m[r][c];
        }
    }
    for(int r = 1; r <= row; ++r){
        sum=0;
        for (int c = 1; c <= column; ++c){
            sum+=m[r][c];
        }
        printf("The sum of row number ");
        cout << r;
        printf(" is ");
        cout << sum << endl;
    }
    for(int r = 1; r <= column; ++r){
        sum=0;
        for (int c = 1; c <= row; ++c){
            sum += m[c][r];
        }
        printf("The sum of column number ");
        cout << r;
        printf(" is ");
        cout << sum << endl;
    }
    return 0;
}