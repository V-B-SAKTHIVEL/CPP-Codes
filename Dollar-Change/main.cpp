#include <iostream>
using namespace std;

int main(){
    int cents = 0;
    cout << "Enter the dollars in cents: ";
    cin >> cents;

    int dollar = cents / 100;
    cents %= 100;
    int quarter = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickels = cents / 5;
    int pennies = cents %= 5;

    cout << "You can provide the change as follows: " << endl;
    cout << "Dollar: " << dollar << endl;
    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
}
