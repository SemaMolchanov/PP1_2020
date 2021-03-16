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
    int size, to_low_cost, to_up_cost, lower_count = 0, upper_count = 0;
    string s;
    cin >> size >> to_low_cost >> to_up_cost;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            upper_count++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z'){
            lower_count++;
        }
    }
    cout << min(lower_count * to_up_cost, upper_count * to_low_cost);
    return 0;
}