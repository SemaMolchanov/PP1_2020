#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            if (c == 0){
                m[r][c] = r;
            }
            if (r == 0){
                m[r][c] = c;
            }
            if (r != 0 && c != 0){
                m[r][c] = r*c;
            }
            cout << m[r][c] <<" ";
        }
        cout << endl;
    }
    return 0;
}