#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    string m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c <= r; c++){
            m[r][c] = "[*]";
            cout << m[r][c];
        }
        cout << endl;
    }
    return 0;
}