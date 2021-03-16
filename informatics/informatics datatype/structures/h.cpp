#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string surname;
    double math, phys, inf;
    student(){}
};

int main(){
    vector<pair<string, string> > goodmarks;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        student a;
        cin >> a.name >> a.surname >> a.math >> a.phys >> a.inf;
        if (a.math >= 3.5 && a.phys > 3.5 && a.inf > 3.5){
            goodmarks.push_back(make_pair(a.surname, a.name));
        }
    }
    vector<pair<string, string> >::iterator it;
    for (it = goodmarks.begin(); it != goodmarks.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}