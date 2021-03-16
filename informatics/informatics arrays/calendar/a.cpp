#include <iostream>

using namespace std;

int main(){
    int day;
	cin >> day;
    const int m[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = 0;
    while(month < 12 && m[month] < day){
        day -= m[month];
        month++;
    }
    cout << day << ' ' << month + 1;
    return 0;
}