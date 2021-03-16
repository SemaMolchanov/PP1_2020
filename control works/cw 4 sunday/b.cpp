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

void atbash_encrypted_word_printer(string word){
    for(int i = 0; i < word.size(); i++){
        word[i] = word[i]-(2*(word[i]-'a')) + 25;
        cout << word[i];
    }
}

/*void atbash_encrypted_word_printer(string word, int i){
    if (i == word.size()){
        return;
    }
    word[i] = word[i]-(2*(word[i]-'a')) + 25;
    cout << word[i];
    return encrypter(word, i + 1);
}*/

int main(){
    string word;
    cin >> word;
    atbash_encrypted_word_printer(word);
    /*atbash_encrypted_word_printer(word, 0);*/
    return 0;
}