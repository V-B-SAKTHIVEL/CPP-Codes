#include <iostream>
using namespace std;
int calculate_sum() {
    int sum = 0;
    for(int i = 1; i <= 15; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    cout << "Sum of odd numbers from 1 to 15 is: " << calculate_sum();
    return 0;
}
