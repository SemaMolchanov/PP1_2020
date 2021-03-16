#include <iostream>
#include <cmath>

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
        return sqrt((x2 - x1)*(x2 + x1) + (y2 - y1)*(y2 - y1));
    }
};

int main(){
    int size;
    cin >> size;
    point p[size];
    point o(0, 0);
    for (int i = 0; i < size; i++){
        cin >> p[i].x >> p[i].y;
    }
    double maxi = -1e9;
    point max_point = o;
    double a[size];
    for (int i = 0; i < size; i++){
        a[i] = p[i].distance(o);
        if (a[i] > maxi){
            maxi = a[i];
            max_point = p[i];
        }
    }
    cout << max_point.x << " " << max_point.y;
    return 0;
}