#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string &res){
    for (int i = 0; i <= res.size()/2; i++){
		if (res[i] != res[res.size() - i - 1]){
			return false;
		}
	}
    return true;
}

int main (){
	string res = "", s;
	for (; cin >> s; res += s);
    if (is_palindrome(res)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
	return 0;
}