#include<iostream>
#include<map>
using namespace std;

int n;
int a[1111];
map<int, int> q;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        q[a[i]] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(q[a[i]^a[j]]){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}