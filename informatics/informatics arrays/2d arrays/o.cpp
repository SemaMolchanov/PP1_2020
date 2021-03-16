#include <iostream>

using namespace std;

int main (){
	int size, x = 0, y = 0, dir = 0;
	cin >> size;
    bool m[50][50];
	for (int r = 0; r < size + 2; r++){
		for (int c = 0; c < size + 2; c++){
            m[r][c] = false;
		}
	}
    while (true){
        m[x][y] = true;
        int x1 = x, y1 = y, dir1 = dir;
        if (dir == 0){
            if (y + 1 < size && m[x][y + 2] == false){
                y++;
            }
            else{
                dir = 1;
            }
        }
        if (dir == 1){
            if (x + 1 < size && m[x+2][y] == false){
                x++;
            }
            else{
                dir = 2;
            }
        }
        if (dir == 2){
            if (y - 1 >= 0 && m[x][y - 2] == false){
                y--;
            }
            else{
                dir = 3;
            }
        }
        if (dir == 3){
            if (m[x - 2][y] == false){
                x--;
            }
            else{
                dir = 0;
            }
        }
        if (x == x1 && y == y1 && dir == dir1){
            break;
        }
    }
    for (int r = 0; r < size; r++){
		for (int c = 0; c < size; c++){
			cout << m[r][c];
		}
		cout << endl;
	}
    return 0;
}