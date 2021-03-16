#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int number;
    int root;
    cin >> number;
    root = sqrt(number);
    if (root*root == number){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}