#include <iostream>

using namespace std;

char maximum(string s, int max, int i){
    if (i == s.size()){
        return max;
    }
    if (s[i+1] > max){
        max = s[i+1];
    }
    return maximum(s, max, i+1);
}

int main(){
    string s;
    cin >> s;
    int max = s[0];
    cout << maximum(s, max, 0);
    return 0;
}