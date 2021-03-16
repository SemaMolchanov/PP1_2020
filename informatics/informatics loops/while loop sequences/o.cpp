#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, sum = 0, sqr_sum = 0, k = -1;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        sum += n;
        sqr_sum += n*n;
        k++;
    }
    float s = sum/float(k);
    cout << sqrt((sqr_sum - 2*sum*s + s*s*k)/(k-1));
    return 0;
}