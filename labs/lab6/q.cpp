#include <iostream>
#include <iomanip>

using namespace std;

float percent_of_girls(int students, int girls){
    float percent_of_girls = (float(girls)/float(students))*100;
    return percent_of_girls;
}

int main(){
    int students, girls;
    cin >> students >> girls;
    cout << percent_of_girls(students, girls);
    return 0;
}