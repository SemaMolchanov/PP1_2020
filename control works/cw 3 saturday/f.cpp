#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    set<string> list;
    set<string> came;
    set<string> missed;
    set<string> an_group;
    int n;
    cin >> n;
    string name1;
    for (int i = 0; i < n; i++){
        cin >> name1;
        list.insert(name1);
    }
    int m;
    cin >> m;
    string name2;
    for (int j = 0; j < m; j++){
        cin >> name2;
        came.insert(name2);
    }
    set<string>::iterator it;
    set<string>::iterator jt;
    for (it = list.begin(); it != list.end(); it++){
        if (came.find(*it) == came.end()){
            missed.insert(*it);
        }
    }
    for (jt = came.begin(); jt != came.end(); jt++){
        if (list.find(*jt) == list.end()){
            an_group.insert(*jt);
        }
    }
    cout << "Missed students:" << endl;
    for (it = missed.begin(); it != missed.end(); it++){
        cout << "- " << *it << endl;
    }
    cout << "Not in the group:" << endl;
    for (jt = an_group.begin(); jt != an_group.end(); jt++){
        cout << "- " << *jt << endl;
    }
    return 0;
}