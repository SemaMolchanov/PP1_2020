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
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            if (m[r][c] != m[c][r]){
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
    return 0;
}