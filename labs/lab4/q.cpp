#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    for (int r = 0; r < size; r++){
        for (int c = size-1-r; c > 0; c--){
            cout << ".";
        }
        for (int c = 2*r+1; c > 0; c--){
            cout << "*";
        }
        for (int c = size-1-r; c > 0; c--){
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}