#include <iostream>

using namespace std;

int main(){
    int size, max = -1e9, rMax, cMax;
    cin >> size;
    int m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            cin >> m[r][c];
            if (max < m[r][c]){
                max = m[r][c];
                rMax = r;
                cMax = c;
            }
        }
    }
    cout << rMax+1 << " " << cMax+1;
    return 0;
    }