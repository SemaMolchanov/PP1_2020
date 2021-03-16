#include <iostream>

using namespace std;

int main(){
    double x, y, z;
    int n;
    cin >> x >> y >> z >> n;
    double as, bs, cs;
    for (int i = 0; i < n; i++){
        double a, b, c, q;
        cin >> a >> b >> c >> q;
        as += a*q;
        bs += b*q;
        cs += c*q; 
    }
    cout << ((as >= x && bs >= y && cs >= z) ? "YES" : "NO");
    return 0;
}