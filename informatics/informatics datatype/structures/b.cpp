#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
    double x, y;
    point(){}
};

int main(){
    double center, x_sum = 0, y_sum = 0;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++){
        point a;
        cin >> a.x >> a.y;
        x_sum += a.x;
        y_sum += a.y;
    }
    cout << x_sum/size << " " << y_sum/size;
    return 0;
}