#include <vector>
#include <iostream>
using namespace std;

void find_first_vowel(vector<char>& vec) {
    int n = 0;
    bool vowCheck = false;
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    do{
        if(vec.size() != 0){
            
        for(auto charVowel: vowels){
            if(vec.at(n) == charVowel){
                cout << "Vowel found: " << vec.at(n) << endl;
                cout << "Position: " << n << endl;
                vowCheck = true;
            }
        }
        n++;
        }
    }while(n < vec.size() && !vowCheck);
    
    if(!vowCheck){
        cout << "No vowel was found";
    }
}

int main(){
    vector <char> vec {'a'};
    find_first_vowel(vec);
}
