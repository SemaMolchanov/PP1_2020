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

#define v_p_it vector<pair<int, int> >::iterator
#define m_p make_pair

using namespace std;

int main(){
    multimap<int, int> rand_pairs;
    vector<int> counters;
    int num_of_pairs;
    cin >> num_of_pairs;
    for (int i = 0; i < num_of_pairs; i++){
        int num1, num2;
        cin >> num1 >> num2;
        if (rand_pairs.find(min(num1, num2)) != rand_pairs.end() && rand_pairs.find(max(num1, num2)) != rand_pairs.end()){
            counters.push_back(1);
        }
        else{
            rand_pairs.insert(m_p(min(num1, num2), max(num1, num2)));
            counters.push_back(0);
        }
    }
    for_each(counters.begin(), counters.end(), [](int x){
        cout << x << endl;
    });
    return 0;
}