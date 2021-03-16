#include <iostream>

using namespace std;

int main(){
	int sec;
	cin >> sec;
    int num = 1, cnt = 1;
	for (int i = 0; i < sec; i++){
		if (cnt == 0){
			num++;
			cnt = num;
		}
        cout << num << " ";
		cnt--;
	}
    return 0;
}