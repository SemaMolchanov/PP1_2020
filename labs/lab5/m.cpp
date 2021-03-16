#include <iostream>

using namespace std;

int main(){
    string s;
    char x;
    int n, count = 0;
    cin >> s >> x >> n;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == x){
            count++;
        }
    }
    if (count == n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}