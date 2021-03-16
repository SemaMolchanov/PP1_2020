#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int m[size][size];
    int diagSum = 0;
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            cin >> m[r][c];
            if ((r+c) == (size-1)){
                diagSum += m[r][c];
            }
        }
    }
    cout << diagSum;
    return 0;
}