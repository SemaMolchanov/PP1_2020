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

string to_upper(string &some_word, int i = 0){
    if (i == some_word.size()){
        return some_word;
    }
    if (some_word[i] >= 'a' && some_word[i] <= 'z'){
        some_word[i] -= ' ';
    }
    return to_upper(some_word, i + 1);
}

string to_lower(string &some_word, int i = 0){
    if (i == some_word.size()){
        return some_word;
    }
    if (some_word[i] >= 'A' && some_word[i] <= 'Z'){
        some_word[i] += ' ';
    }
    return to_lower(some_word, i + 1);
}

// This function generates the key in 
// a cyclic manner until it's length isi'nt 
// equal to the length of original text 
string generateKey(string str, string key) { 
    int x = str.size(); 
    for (int i = 0; ; i++) { 
        if (i == x){ 
            i = 0; 
        }
        if (key.size() == str.size()){
            break; 
        }
        key.push_back(key[i]); 
    } 
    return key; 
} 
  
// This function returns the encrypted text 
// generated with the help of the key 
string cipherText(string str, string key) { 
    string cipher_text; 
    for (int i = 0; i < str.size(); i++){ 
        char x = ((str[i] + key[i]) % 26) + 'A'; 
        cipher_text.push_back(x); 
    } 
    return cipher_text; 
} 
  
// This function decrypts the encrypted text 
// and returns the original text 
string originalText(string cipher_text, string key) { 
    string orig_text; 
    for (int i = 0 ; i < cipher_text.size(); i++){ 
        char x = ((cipher_text[i] - key[i] + 26) % 26) + 'A'; 
        orig_text.push_back(x); 
    } 
    return orig_text; 
} 
  
// Driver program to test the above function 
int main() 
{ 
    string str, keyword; 
    cin >> str >> keyword;
    to_upper(str);
    to_upper(keyword);
    string key = generateKey(str, keyword); 
    string cipher_text = cipherText(str, key); 
    cout << to_lower(cipher_text) << endl; 
    /*cout << "Original/Decrypted Text : "<< originalText(cipher_text, key);*/
    return 0; 
} 