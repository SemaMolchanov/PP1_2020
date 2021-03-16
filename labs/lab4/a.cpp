#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            cin >> m[r][c];
        }
    }
    int max = m[0][0];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            if (m[r][c] > max){
                max = m[r][c];
            }
        }
    }
    cout << max;
    return 0;
}