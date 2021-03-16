#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    set<int> my_set;
    int size, element, count_of_elements = 0;
    cin >> size;
    for (int i = 0; i < size; i++){
        cin >> element;
        if (my_set.find(element) == my_set.end()){
            my_set.insert(element);
        }
        else{
            count_of_elements++;
        }
    }
    if (count_of_elements == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}