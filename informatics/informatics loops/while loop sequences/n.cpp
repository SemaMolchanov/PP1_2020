#include <iostream>
#include <cmath>

using namespace std;

int main(){
     int prev, cur, next, prev_entry = -1, min_gap = 0, i = 0;
     cin >> prev >> cur;
     while (true){
        cin >> next;
        if (next == 0){
            break;
        }
        if (cur > prev && cur > next){
            if (prev_entry == -1){
                prev_entry = i;
            }
            else{
                int gap = (i - prev_entry);
                prev_entry = i;
                if (min_gap = -1){
                    min_gap = gap;
                }
                else{
                    min_gap = min(gap, min_gap);
                }
            }
        }
        prev = cur;
        cur = next;
        i++;
     }
     if (min_gap = -1){
         cout << 0;
     }
     else{
         cout << min_gap;
     }
     return 0;
}