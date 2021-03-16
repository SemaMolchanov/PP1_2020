#include <iostream>

using namespace std;

int main(){
    string s, maxs = "";
    while (cin >> s){
        if (s.size() > maxs.size()){
            maxs = s;
        }
    }
    cout << maxs << endl << maxs.size();
    return 0;
}