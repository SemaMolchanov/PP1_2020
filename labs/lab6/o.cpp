#include <iostream>

using namespace std;

int sum(int ticket_number){
    int sum_of_digits = 0;
    if (ticket_number > 0){
        while (ticket_number != 0){
            sum_of_digits = sum_of_digits + ticket_number%10;
            ticket_number = ticket_number/10;
        }
    }
    return sum_of_digits;
}

int main(){
    int ticket_number;
    cin >> ticket_number;
    if (sum(ticket_number) % (ticket_number%10) == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}