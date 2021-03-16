#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
    sort (arr, arr + 3);
    if (arr[0] + arr[1] <= arr[2]){
		cout << "impossible";
		return 0;
	}
    arr[0] = pow(arr[0], 2) + pow(arr[1], 2);
	arr[2] = pow(arr[2], 2);
    if (arr[0] == arr[2]){
		cout << "right";
	}
    else{
		cout << ((arr[0] > arr[2]) ? "acute" : "obtuse");
    }
    return 0;
}