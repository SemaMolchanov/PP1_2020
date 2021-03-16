#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
    double x, y;
    point(){}
    point(double x0, double y0){
        this->x = x0;
        this->y = y0;
    }
    double distance(point o){
        double x1 = this->x;
        double y1 = this->y;
        double x2 = o.x;
        double y2 = o.y;
        return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    }
};

int main(){
    point o(0, 0);
    int size;
    cin >> size;
    point p[size];
    for (int i = 0; i < size; i++){
        cin >> p[i].x >> p[i].y;
    }
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (p[i].distance(o) > p[j].distance(o)){
                swap(p[i], p[j]);
            }
        }
    }
    for (int i = 0; i < size; i++){
        cout << p[i].x << " " << p[i].y << endl;
    }
    return 0;
}