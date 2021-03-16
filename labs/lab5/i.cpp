#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int sum1 = 0, sum2= 0;
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] >= 'a' && s1[i] <= 'z'){
            sum1 += s1[i];
        }
    }
    for ( int j = 0; j < s2.size(); j++){
        if ( s2[j] >= 'a' && s2[j] <= 'z'){
            sum2 += s2[j];
        }
    }
    if (sum1 == sum2){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}