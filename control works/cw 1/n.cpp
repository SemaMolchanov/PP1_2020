#include <iostream>

using namespace std;

int main(){
    int A, B, C, T;
    cin >> A >> B >> C >> T;
    if (T > A){
        cout << (T - A)*C + A*B;
}   
    else{
        cout << T*B;
}  
return 0;
}