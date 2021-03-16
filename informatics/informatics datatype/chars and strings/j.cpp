#include <iostream>

using namespace std;

int main(){
    string direction;
    int step, x = 0, y = 0;
    while (cin >> direction >> step){
        if (direction == "North"){
            y += step;
        }
        if (direction == "South"){
            y -= step;
        }
        if (direction == "East"){
            x += step;
        }
        if (direction == "West"){
            x -= step;
        }
    }
    cout << x << " " << y;
    return 0;
}