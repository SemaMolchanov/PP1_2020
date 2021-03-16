#include <iostream>
#include <map>
#include <algorithm>
#include <string>

#define m_it map<pair<pair<string,int>,pair<string,int> >, int>::iterator
#define mp make_pair

using namespace std;

int main(){
    map<pair<pair<string,int>,pair<string,int> >, int> m;
    int n;
    cin >> n;
    string name1, name2;
    int score1, score2;
    for (int i = 0; i < n; i++){
        cin >> name1 >> score1 >> name2 >> score2;
        m[mp(mp(name1,score1), mp(name2,score2))] = score1 + score2;     
    }
    m_it j;
    for (j = begin(m); j != end(m); j++){
        cout << ((*j).first.first.first) << " and " << ((*j).first.second.first) << " " << (*j).second << endl;
    }
    return 0;
}