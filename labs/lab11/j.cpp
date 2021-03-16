/*#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int main(){
    vector<pair<double, pair<double, double> > > v;
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x2 >> y2;
        double distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
        v.push_back(make_pair(distance, make_pair(x2, y2)));
    }
    sort(v.begin(), v.end());
    vector<pair<double, pair<double, double> > >::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << (*it).second.first << " " << (*it).second.second << endl;
    }
    return 0;
}*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
    double x;
    double y;
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
    double xo, yo;
    cin >> xo >> yo;
    point o(xo, yo);
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