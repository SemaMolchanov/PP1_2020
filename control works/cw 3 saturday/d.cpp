#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int k_bonacci(int k, int m){
    if (m == 1){
        return 0;
    }
    if (m == 2){
        return 1;
    }
    return k_bonacci(k, m-2) + (k*k_bonacci(k, m-1));
}

int main(){
    int k, m, m_th_term, last_digit;
    cin >> k >> m;
    m_th_term = k_bonacci(k, m);
    last_digit = m_th_term % 10;
    if (last_digit < 0){
        last_digit = last_digit * -1;
    }
    cout << last_digit;
    return 0;
}