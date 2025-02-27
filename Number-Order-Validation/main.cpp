#include <iostream>
using namespace std;

bool isValid(int num) {
    int prevDigit = num % 10;  
    
    while (num > 0) {
        int currentDigit = num % 10;  
        
       
        if (currentDigit == 0 || currentDigit > prevDigit) {
            return false; 
        }
        
        prevDigit = currentDigit; 
        num /= 10; 
    }
    
    return true;  
}

int main() {
    int num;
    cout << "Enter a 6-digit number: ";
    cin >> num;

    

    if (isValid(num)) {
        cout << "The number is valid and in ascending order." << endl;
    } else {
        cout << "The number is invalid." << endl;
    }

    return 0;
}
