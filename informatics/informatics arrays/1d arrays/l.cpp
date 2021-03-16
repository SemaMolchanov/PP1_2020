#include <iostream>

using namespace std;

int main(){
    int size, petya;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    cin >> petya;
    for (int i = 0; i < size; i++){
        if (petya > a[i]){
            cout << i + 1;
            return 0;
        }
    }
    cout << size + 1;
    return 0;
}