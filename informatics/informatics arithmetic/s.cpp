#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int height, up, down;
	cin >> height >> up >> down;

	cout << ceil((height - up) / (float)(up - down)) + 1;
    return 0;
}