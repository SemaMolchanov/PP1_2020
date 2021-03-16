#include <iostream>
#include <algorithm>

using namespace std;

int a[10];
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        a[s[i]-'0']++;
    }
    sort(a, a + 10);
    for (int i = 0; i < 9; i++){
        if (a[i] != 0 && a[i] != a[i+1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}