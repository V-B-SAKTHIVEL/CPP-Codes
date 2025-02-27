#include <iostream>
using namespace std;

bool isValid(int num) {
    // Check if the number contains 0 and if it is in ascending order
    int prevDigit = num % 10;  // To store the previous digit (initialized to a value smaller than any digit)
    
    while (num > 0) {
        int currentDigit = num % 10;  // Get the current digit
        
        // Check if the current digit is 0 or not in ascending order
        if (currentDigit == 0 || currentDigit > prevDigit) {
            return false; // Invalid if 0 is found or digits are not in order
        }
        
        prevDigit = currentDigit; // Update the previous digit
        num /= 10;  // Remove the last digit
    }
    
    return true;  // Valid if no invalid condition is met
}

int main() {
    int num;
    cout << "Enter a 6-digit number: ";
    cin >> num;

    // Check if the input is exactly 6 digits (num must be in the range 100000 to 999999)

    if (isValid(num)) {
        cout << "The number is valid and in ascending order." << endl;
    } else {
        cout << "The number is invalid." << endl;
    }

    return 0;
}
