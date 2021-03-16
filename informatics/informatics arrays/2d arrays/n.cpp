#include <iostream>

using namespace std;

int main (){
	int row, col;
	cin >> row >> col;
    int input[row][col], turned[col][row];
	for (int r = 0; r < row; r++){
		for (int c = 0; c < col; c++){
			cin >> input[r][c];
		}
	}
    for (int r = 0; r < row; r++){
		for (int c = 0; c < col; c++){
			turned[c][r] = input[row - r - 1][c];
		}
	}
    cout << col << " " << row << endl;
	for (int r = 0; r < col; r++){
		for (int c = 0; c < row; c++){
			cout << turned[r][c] << " ";
		}
		cout << endl;
	}
	return 0;
}