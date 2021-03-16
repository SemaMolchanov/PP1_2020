#include <iostream>

using namespace std;

int main(){
    int x1, y1, x2, y2, sign_x1, sign_y1, sign_x2, sign_y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 > 0){
        sign_x1 = 1;
    }
    else if (x1 == 0){
        sign_x1 = 0;
    }
    else if (x1 < 1){
        sign_x1 = -1;
    }
    if (y1 > 0){
        sign_y1 = 1;
    }
    else if (y1 == 0){
        sign_y1 = 0;
    }
    else if (y1 < 1){
        sign_y1 = -1;
    }
    if (x2 > 0){
        sign_x2 = 1;
    }
    else if (x2 == 0){
        sign_x2 = 0;
    }
    else if (x2 < 1){
        sign_x2 = -1;
    }
    if (y2 > 0){
        sign_y2 = 1;
    }
    else if (y2 == 0){
        sign_y2 = 0;
    }
    else if (y2 < 1){
        sign_y2 = -1;
    }
    cout << ((sign_x1 == sign_x2 && sign_y1 == sign_y2) ? "YES" : "NO");
    return 0;
}