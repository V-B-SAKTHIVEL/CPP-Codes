#include <iostream>
#include <vector>
using namespace std;

int main(){
    int scores [] = {100, 90, 97};
    for(int score: scores){
       cout << score << endl;
    }
    //We don't wanna explicitly mention the datatype - Use 'auto' type.
    cout << "Displaying the same scores using auto type: \n";
    for(auto score: scores){
       cout << score << endl;   
    }
    //Range-based for loop using vectors
    vector<double> temps = {87.2, 77.1, 83, 89.1};
    double average_temp {};
    double running_sum {};
    cout << "Temperature Recorded: " << endl;
    for(auto temp: temps){
       cout << temp << endl;
       running_sum += temp;    
    }
    average_temp = running_sum / temps.size();
    cout << "Average temperature is: " << average_temp << endl;
    cout << "Range-based for loop applied to a data collection: \n";
    for(auto num: {1, 2, 3, 4}){
        cout << num << endl;
    }
    //Range-based for loop using strings:
    cout << "Iterating through the string using this Range-Based For Loop: \n";
    for(auto c: "Sakthi"){
        cout << c << endl;
    }
}
