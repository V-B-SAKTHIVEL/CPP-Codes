#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int n = 16 - age;
    if(age >= 16){
        if(has_car){
            cout << "Yes - you can drive!";
        } else {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
    } else {
        cout << "Sorry, come back in " << n << " years and be sure you own a car when you come back.";
    }
}

int main(){
    int age; bool has_car;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you have a car? (0-no, 1-yes): ";
    cin >> has_car;
    
    can_you_drive(age, has_car);
}
