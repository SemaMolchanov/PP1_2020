#include <iostream>

using namespace std;

struct student{
    string name;
    string surname;
    double math, phys, inf;
    student(){}
};

int main(){
    int n;
    double math_sum = 0, phys_sum = 0, inf_sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        student a;
        cin >> a.name >> a.surname >> a.math >> a.phys >> a.inf;
        math_sum += a.math;
        phys_sum += a.phys;
        inf_sum += a.inf;
    }
    cout << math_sum/n << " " << phys_sum/n << " " << inf_sum/n;
    return 0;
}