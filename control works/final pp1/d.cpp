#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

double get_score(string mark){
    if (mark == "A+"){
        return 4.00;
    }
    else if (mark == "A"){
        return 3.75;
    }
    else if (mark == "B+"){
        return 3.50;
    }
    else if (mark == "B"){
        return 3.00;
    }
    else if (mark == "C+"){
        return 2.50;
    }
    else if (mark == "C"){
        return 2.00;
    }
    else if (mark == "D+"){
        return 1.50;
    }
    else if (mark == "D"){
        return 1.00;
    }
    return 0;
}

int main(){
    vector<pair<double, pair<string, string> > > stud;
    string name, surname;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int k, credit_sum = 0;
        double total_score = 0;
        cin >> surname >> name >> k;
        for (int j = 0; j < k; j++){
            string mark;
            int credits;
            cin >> mark >> credits;
            credit_sum += credits;
            total_score += (get_score(mark) * credits);
        }
        double GPA = total_score/credit_sum;
        stud.push_back(make_pair(GPA, make_pair(surname, name)));
    }
    sort(stud.begin(), stud.end());
    vector<pair<double, pair<string, string> > >::iterator it;
    for (it = stud.begin(); it != stud.end(); it++){
        cout << (*it).second.first << " " << (*it).second.second << " ";
        cout << setprecision(4) << it->first;
        cout << endl;
    }
    return 0;
}