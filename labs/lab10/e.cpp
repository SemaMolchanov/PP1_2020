#include <iostream>
#include <map>
#include <algorithm>

#define m_it map<string, double>::iterator

using namespace std;



int main(){
    map<string, double> m;
    int days, day;
    double sum = 0;
    cin >> days;
    for (int i = 0; i < days; i++){
        cin >> day;
        for (int j = 0; j < day; j++){
            string s;
            double x;
            cin >> s >> x;
            sum += x;
            m[s] += x;
        }
    }
    m_it it;
    for (it = begin(m); it != end(m); it++){
        (*it).second = ((*it).second/sum)*100;
    }
    for (it = begin(m); it != end(m); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    /*for_each(begin(m), end(m), [](double &x, double sum){
        x = ((x/sum)*100);
        return x;
    });
    for_each(begin(m), end(m), [](string &s, double &x){
        cout << s " " << x << endl;
    });*/
    return 0;
}