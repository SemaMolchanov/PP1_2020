#include <iostream>

using namespace std;

int main(){
    double numbers;
    cin >> numbers;

    double sum = 0;
for (int i=0; i<numbers; i++){
     int num;
     cin >> num;
     sum = sum + num;
}
cout << "Average: " << sum/numbers << endl;
cout << "Sum: " << sum;
 return 0;
}