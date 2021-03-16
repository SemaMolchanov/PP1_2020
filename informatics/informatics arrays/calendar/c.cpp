#include <iostream>

using namespace std;

int main(){
    int date;
	cin >> date;
    int m[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year = date % 10000;
    int month = date / 10000 % 100;
    int day = date / 1000000 % 100;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        m[1]++;
    }
    int day_A_D = day;
    int i = 1;
	while (i < year){
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
            day_A_D += 366;
        }
        else{
            day_A_D += 365;
        }
        i++;
    }
    int j = 0;
	while (j < month - 1){
		day_A_D += m[j];
        j++;
	}
    cout << day_A_D;
    return 0;
}