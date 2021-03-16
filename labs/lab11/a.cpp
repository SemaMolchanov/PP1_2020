#include <iostream>
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
    map<string, int> week;
    week["SUN"] = 7;
    week["SAT"] = 1;
    week["FRI"] = 2;
    week["THU"] = 3;
    week["WED"] = 4;
    week["TUE"] = 5;
    week["MON"] = 6;
    map<string, int>::iterator it;
    string s;
    cin >> s;
    for (it = begin(week); it != end(week); it++){
        if (s == (*it).first){
            cout << (*it).second;
            break;
        }
    }
    return 0;
}