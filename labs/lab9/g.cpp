#include<iostream>
#include<stack>

using namespace std;

string s;
stack<char> st;

int main(){
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(!st.size()){
            st.push(s[i]);
        }
        else if(st.top() =='1' && s[i] =='1'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    string s1 = "";
    while(st.size()){
        s1 += st.top();
        st.pop();
    }
    for(int i = s1.size() - 1; i >= 0; i--){
        cout << s1[i];
    }
    return 0;
}