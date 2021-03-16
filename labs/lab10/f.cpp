#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    double arr[101];
    int n;
    cin >> n;
    int at1, at2, final, credits;
    double credit_sum = 0;
    for(int i = 0; i < 50; i++){
        arr[i] = 0;
    }
    double cnt = 1.0;
    for(int i = 50; i < 100; i += 5){
        arr[i] = cnt;
        arr[i+1] = cnt;
        arr[i+2] = cnt;
        arr[i+3] = cnt;
        arr[i+4] = cnt;
        cnt += 1.0/3.0;
    }
    arr[100] = 4.0;
    double gpa = 0;
    for(int i = 0; i < n; i++){
        cin >> at1 >> at2 >> final >> credits;
        credit_sum += credits;
        if(at1 + at2 < 30 || final < 20){
            gpa += arr[0];
        }
        else{
            gpa += (arr[at1+at2+final] * credits);
        }
    }
    cout << gpa/credit_sum << endl;
    return 0;
}