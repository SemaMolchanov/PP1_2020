#include <iostream>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = x1-x2;
    if (x<0){
        x*=-1;
}   int y = y1-y2;
    if (y<0){
        y*=-1;
} 
    if (x==y){
        cout << "Won";
} else {
        cout << "Lose";
}
return 0;
}