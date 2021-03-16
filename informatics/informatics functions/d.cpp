#include <iostream>

using namespace std;
bool arr[3];

bool election(bool x, bool y, bool z){
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;
    int true_cnt = 0, false_cnt = 0;
    for (int i = 0; i < 3; i++){
        if (arr[i] == true){
            true_cnt++;
        }
        else if (arr[i] == false){
            false_cnt++;
        }
    }
    if (true_cnt > false_cnt){
        return 1;
    }
    return 0;
}

int main(){
    bool x, y, z;
    cin >> x  >> y >> z;
    cout << election(x, y, z);
    return 0;
}