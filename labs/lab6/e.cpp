#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double hypotenuse(int a, int b){
    double hypotenuse = sqrt((a*a) + (b*b));
    return hypotenuse;
}

int main(){
    int a, b;
    cin >> a >> b;
    std::cout << std::setprecision(4) << hypotenuse(a, b);
    return 0;
}