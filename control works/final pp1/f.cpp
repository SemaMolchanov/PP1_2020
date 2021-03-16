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

int reverse_number(int number, int reversed) {
    if (number == 0){
        return reversed;
    } 
    return reverse_number(number / 10, reversed * 10 + number % 10);
}


int main(){
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int num1, num2;
        cin >> num1 >> num2;
        int x = reverse_number(num1, 0);
        int y = reverse_number(num2, 0);
        int sum = x + y;
        int rev_sum = reverse_number(sum, 0);
        v.push_back(rev_sum);
    }
    for_each(v.begin(), v.end(), [](int rev_sum){
        cout << rev_sum << endl;
    });
    return 0;
}