#include <iostream>

using namespace std;

void book_finder(int a[], int n, int x){
    int occurence = 0;
    for (int i = 0; i < n; i++){
        if(x == a[i]){
            occurence++;
        }
    }
    if (occurence != 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    book_finder(a, n, x);
    return 0;
}