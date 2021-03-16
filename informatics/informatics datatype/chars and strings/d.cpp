#include <iostream>

using namespace std;

bool are_equal(string s1, string s2){
    if (s1 == s2){
        return true;
    }
    return false;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if (are_equal(s1, s2)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}