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

bool is_prime(int x) {
    if (x < 2) {
        return false;
    }
    bool answer = true;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            answer = false;
        }
    }
    return answer;
}

int main(){
    int n, left, right;
    cin >> n;
    int num1 = n;
    int num2 = 0;
    int i = 0;
    while (true){
        if (is_prime(num1) && is_prime(num2) && num1 + num2 == n){
            left = num2;
            right = num1;
            break;
        }
        if (i % 2 == 0){
            num1--;
        }
        else{
            num2++;
        }
        i++;
    }
    cout << left << " " << right;
    return 0;
}