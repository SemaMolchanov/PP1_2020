#include <iostream>

using namespace std;

int main(){
    int a, b, answer;
    char x;
    cin >> a >> x >> b;
    if (x == '+'){
        answer = a + b;
}
    if (x == '-'){
         answer = a - b;
}
    if (x == '*'){
          answer = a * b;
}
    if (x == '/'){
         answer = a / b;
}
cout << a << " " << x << " " << b << " " << "=" << " " <<  answer;
return 0;
}