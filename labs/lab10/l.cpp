#include <iostream>
#include <vector>
#include <algorithm>

#define v_it vector<int>::iterator

using namespace std;

int main(){
    /*int n;
	cin >> n;
    int num = 1, cnt = 1;
	for (int i = 0; ; i++){
		if (cnt == 0){
			num++;
			cnt = num;
		}
        if (num > n){
            break;
        }
        cout << num << " ";
		cnt--;
	}*/
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		fill_n(back_inserter(v), i, i);
	}
	for_each(v.begin(), v.end(), [](int x){
		cout << x << " ";
	});
    return 0;
}