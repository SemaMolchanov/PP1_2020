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
    string str, root;
    cin >> str >> root;
    int a[str.size()];
    int occur_count = 0;
    int index = 0; 
    while (str.find(root, index) != string::npos) {
        a[occur_count] = str.find(root, index);
        occur_count++;
        index = str.find(root, index) + 1;
    }
    for (int i = 0; i < occur_count; i++){
        cout << a[i] << " ";
    }
    return 0;
}