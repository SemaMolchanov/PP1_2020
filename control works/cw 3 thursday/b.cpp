#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    set<string> students;
    vector<string> cheaters;
    int n, count_of_honest = 0;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> name;
        if (students.find(name) == students.end()){
            students.insert(name);
            count_of_honest++;
        }
        else{
            cheaters.push_back(name);
        }
    }
    vector<string>::iterator it;
    vector<string>::iterator j;
    for (it = cheaters.begin(); it != cheaters.end(); it++){
        for (j = it + 1; j != cheaters.end(); j++){
            if (*it == *j){
                *j = " ";
            }
        }
    }
    if (count_of_honest == n){
        cout << "Understandable, have a great day";
    }
    else{
        for (it = cheaters.begin(); it != cheaters.end(); it++){
            if (*it != " "){
                cout << *it << endl;
            }
        }
    }
    return 0;
}