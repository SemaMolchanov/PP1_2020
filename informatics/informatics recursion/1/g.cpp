#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string eraser(string s, int left, int right){
    if (left >= right){
        return s;
    }
    if (s[left] == s[right]){
        s[left] = ' ';
        s[right] = ' ';
    }
    return eraser(s, left + 1, right - 1);
}

void print(char arr[], int size){
    for (int i = 0; i < size; i++){
        if (arr[i] != ' '){
            cout << arr[i]; 
        }
    }
}

int main(){
    string s;
    cin >> s;
    int left = 0;
    int right = s.size() - 1;
    /*cout << eraser(s, left, right);*/
    string c = eraser(s, left, right);
    /*cout << c;*/
    int size = c.size();
    char arr[size];
    for (int i = 0; i < size; i++){
        arr[i] = c[i];
    }
    print(arr, size);
    /*print(s, 0);*/
    return 0;
}