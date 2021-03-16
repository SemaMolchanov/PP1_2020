#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
	int n;
	cin >> n;
    vector<int> v;
	for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
	int k;
	cin >> k;
	rotate(v.begin (), ((k > 0) ? v.end () : v.begin ()) - k, v.end ());
    for_each(v.begin(), v.end(), [](int a){
        cout << a << " ";
    });
	return 0;
}