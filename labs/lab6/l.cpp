#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[10];
int main(){
    string s;
    int n;
    cin >> s;
    cin >> n;
    int count = 0;
    int max = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            count++;
        }
        else{
            if (count > max){
                max = count;
            }
            count = 0;
        }
    }
    if (max >= n){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
    return 0;
}