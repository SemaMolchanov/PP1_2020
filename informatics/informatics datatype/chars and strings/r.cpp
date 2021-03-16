#include <iostream>

using namespace std;

int main(){
    int count = 0;
    char c;
    while (cin >> c){
        if (c == '6' || c == '9' || c == '0'){
            count++;
        }
        else if (c == '8'){
            count += 2;
        }
    }
    cout << count;
    return 0;
}