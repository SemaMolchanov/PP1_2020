#include <iostream>

using namespace std;

int main(){
    int n;
    double sum = 0, count = 0;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        sum += n;
        count++;
    }
    cout << sum/count;
    return 0;
}