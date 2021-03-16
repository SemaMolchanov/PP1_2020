#include <iostream>

using namespace std;

int  main(){
    int size;
    cin >> size;
    int m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            cin >> m[r][c];
        }
    }
    int max = -1e9;
    int rMax, cMax;
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            if (max < m[r][c] && r == c){
                max = m[r][c];
                rMax = r+1;
                cMax = c+1;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << rMax << ";" << cMax;
    return 0;
}