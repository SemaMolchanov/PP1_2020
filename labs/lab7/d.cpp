#include <iostream>

using namespace std;

int sum_of_digits(string s, int sum, int i){
    if (s[i] >= '0' && s[i] <= '9'){
        if (i == s.size() - 1){
            return sum + (s[s.size() - 1] - '0');
        }
        sum += s[i] - '0';
    }
    return sum_of_digits(s, sum, i+1);
}

int main(){
    string s;
    cin >> s;
    int sum = 0;
    cout << sum_of_digits(s, sum, 0);
    return 0;
}