#include <iostream>

using namespace std;

int main(){
    int n;
	cin >> n;
    double sum = 1;
	int sign = -1;
	for (int i = 1; i <= n; i++){
		sum += sign / (double)(2 * i + 1);
		sign = -sign;
	}

	cout << 4 *sum;
    return 0;
}