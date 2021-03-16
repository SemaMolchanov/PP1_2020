#include <iostream>
#include <cmath>
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

int main (){
	int size;
	cin >> size;
    point p[size];
    for (int i = 0; i < size; i++){
		cin >> p[i].x >> p[i].y;
	}

	double max_distance = 0;
	for (int i = 0; i < size; i++){
		for (int j = i + 1; j < size; j++){
			double current_distance = p[i].distance(p[j]);
			max_distance = max(current_distance, max_distance);
		}
	}
	cout.precision (15);
	cout << max_distance;
	return 0;
}