#include <iostream>

using namespace std;

int main(){
    string n;
    int oddSum = 0, evenSum = 0;
    cin >> n;
    for (int i = 0; i < n.size(); i++){
        if (i%2 == 1){
            oddSum += int(n[i]);
        }
        if (i%2 == 0){
            evenSum += int(n[i]);
        }
    }
    if (oddSum == evenSum){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}