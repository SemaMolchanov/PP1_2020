#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int m[size][size];
    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            if (r+c == size-1){
                cout << r+1;
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}