#include <iostream>

using namespace std;

int main(){
     int prev, cur, next, count = 0;
     cin >> prev >> cur;
     while (true){
          cin >> next;
          if (next == 0){
               break;
          }
          if (cur > prev && cur > next){
               count++;
          }
          prev = cur;
          cur = next;
     }
     cout << count;
     return 0;
}