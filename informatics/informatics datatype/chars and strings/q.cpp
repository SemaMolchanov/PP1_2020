#include <iostream>
#include <string>

using namespace std;

int main(){
    string x;
    int n;
    cin >> x >> n;
    for (int i = 1; i < n; i++){
        string it = "";
        char prev_char = x[0];
        int count = 1;
        for (int j = 1; j < x.size(); j++){
            if (x[j] != prev_char){
                it += to_string(count) + prev_char;
                prev_char = x[j];
                count = 0;
            }
            count++;
        }
        x = it + to_string(count) + prev_char;
    }
    cout << x;
    return 0;
}