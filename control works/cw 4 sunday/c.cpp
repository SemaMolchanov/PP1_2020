#include <iostream>
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

int main(){
    string word;
    cin >> word;
    string before_sorting = word;
    sort(begin(word), end(word));
    cout << "The anagram variants for string " << before_sorting << " are:" << endl;
    do{
        for(int i = 0; i < word.size(); i++){
            cout << word[i];
        }
        cout << endl;
    }while (next_permutation(begin(word), end(word)));
    return 0;
}