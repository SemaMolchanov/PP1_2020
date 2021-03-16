#include <iostream>

using namespace std;

int main (){
	long long n;
	cin >> n;
    long long result = (n >= 0) ? n : -1*n;
	if (result % 2){
		result *= (1 + result) / 2;
	}
    else{
		result = result / 2 * (1 + result);
	}
    cout << ((n < 0) ? 1 - result : result);
	return 0;
}