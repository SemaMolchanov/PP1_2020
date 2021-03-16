#include <iostream>

using namespace std;

int main(){
     int prev, next, count = 0;
     cin >> prev;
     while (true){
          cin >> next;
          if (next == 0){
               break;
          }
          if (next > prev){
               count ++;
          }
          prev = next;
     }
     cout << count;
     return 0;
}