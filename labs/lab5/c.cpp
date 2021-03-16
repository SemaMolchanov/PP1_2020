#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int pos = s.find(t);
    if (pos == string::npos){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}