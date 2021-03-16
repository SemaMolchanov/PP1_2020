#include <iostream>

using namespace std;

int main(){
    int day, month, year;
	cin >> day >> month >> year;
	int m[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        m[1]++;
    }
	day += 2;
	if (day > m[month - 1]){
		day -= m[month - 1];
		month++;
	}
    if (month > 12){
		month = 1;
		year++;
	}
    cout << day << ' ' << month << ' ' << year;
    return 0;
}