#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    cin >> s2 >> s1;
    int pos = s1.find(s2);
    if (pos == string::npos){
    cout << "no";
    }
    else{
        cout << "yes";
    }
    return 0;
}