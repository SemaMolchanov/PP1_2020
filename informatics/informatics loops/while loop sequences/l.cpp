#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int prev, next, length = 1, max_length = 0;
    bool mono = true;
    cin >> prev;
    while (true){
        cin >> next;
        if (next == 0){
            break;
        }
        if ((prev > next && mono) || (prev < next && !mono)){
            length++;
        }
        else{
            max_length = max(max_length, length);
            length = 2;
            if (prev > next){
                mono = true;
            }
            else if (prev < next){
                mono = false;
            }
            else{
                length = 1;
            }
        }
        prev = next;
    }
    cout << max(length, max_length);
    return 0;
}