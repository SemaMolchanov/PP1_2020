#include <iostream>

using namespace std;

void string_validator(string s, int n){
    int count = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            count++;
        }
    }
    if (count >= n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    string_validator(s, n);
    return 0;
}