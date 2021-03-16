#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    sort (a, a + size);
    int cnt = 0;
    for (int i = 0; i < size; i++){
        int x = a[i];
        while (x+1 < a[min(size-1, i+1)]){
            x++;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}