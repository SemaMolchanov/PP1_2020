#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s, s1;
    cin >> s;
    s1 = s;
    sort(s.begin(), s.end());
    if (s == s1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}