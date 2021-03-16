#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            if (r + c == size - 1){
                m[r][c] = 1;
            }
            else if (r + c < size - 1){
                m[r][c] = 0;
            }
            else if (r + c > size - 1){
                m[r][c] = 2;
            }
        }
    }
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            cout << m[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}