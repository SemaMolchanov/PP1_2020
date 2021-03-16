#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int lesson;
	cin >> lesson;
	int endtime = (9 * 60 + lesson * 45 + ((lesson - 1) / 2) * 15 + round((lesson - 1) / 2) * 5);
	cout << endtime / 60 << ' ' << endtime % 60;
    return 0;
}