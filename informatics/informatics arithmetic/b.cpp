#include <iostream>

using namespace std;

int main(){
    int a, prev, next;
    cin >> a;
    prev = a-1;
    next = a+1;
    cout << "The next number for the number " << a << " is " << next << "." << endl;
    cout << "The previous number for the number " << a << " is " << prev << "." << endl;
    return 0;
}