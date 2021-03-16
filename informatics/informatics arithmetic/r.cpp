#include <iostream>

using namespace std;

int main(){
    int students, apples;
	cin >> students >> apples;

	cout << (students - (apples % students)) % students;
    return 0;
}