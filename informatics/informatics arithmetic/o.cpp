#include <iostream>

using namespace std;

int main(){
    int rubles, coins, amount;
    cin >> rubles >> coins >> amount;

    int cost_in_coins = (rubles*100) + coins;
    int final_cost = cost_in_coins * amount;
    
    cout << final_cost / 100 << ' ' << final_cost % 100;
    return 0;
}