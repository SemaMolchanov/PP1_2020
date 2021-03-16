#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    bool is_prime = true;
    if (num < 2){
        is_prime = false;
    }
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            is_prime = false;
        }
    }
    cout << ((is_prime) ? "prime" : "composite");
    return 0;
}