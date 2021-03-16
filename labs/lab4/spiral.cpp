#include <iostream>

using namespace std;

int main(){
    int size, x = 0, y = 0, direction = 0; 
    int m[size][size];
    cin >> size;
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            m[r][c] = 0;
        }
    }
    while (true){
        m[x][y] = 1;
        int x1 = x, y1 = y, direction1 = direction;
        if (direction == 0){
            if ((y+1<size) && (m[x][y+2] == 0)){
                y++;
            }
            else{
                direction = 1;
            }
        }
        if (direction == 1){
            if ((x+1<size) && (m[x+2][y] == 0)){
                x--;
            }
            else{
                direction = 2;
            }
        }
        if (direction == 2){
            if ((y-1>=0) && (m[x][y-2] == 0)){
                y--;
            }
            else{
                direction = 3;
            }
        }
        if (direction == 3){
            if (m[x-2][y] == 0){
                x--;
            }
            else{
                direction = 0;
            }
        }
        if (x == x1 && y == y1 && direction == direction1){
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