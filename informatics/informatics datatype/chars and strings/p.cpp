#include <iostream>
#include <string>

using namespace std;

bool is_palindrom (string s){
	for (int i = 0; i <= s.size()/2; i++){
		if (s[i] != s[s.size() - 1 - i]){
			return false;
		}
	}
    return true;
}

int main (){
	string s;
	cin >> s;
    string res = "";
	for (int i = 0; i < s.size(); i++){
		string sub = "";
		for (int j = i; j < s.size(); j++){
			sub += s[j];
			if (((sub.size() > res.size())) && (is_palindrom(sub))){
				res = sub;
			}
		}
    }
	cout << res;
	return 0;
}