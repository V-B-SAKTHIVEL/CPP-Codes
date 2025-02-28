#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> test_scores {10, 20, 30, 40, 50};
    cout << "Test Scores using Array Syntax: " << endl;
    
    cout << "First Score: " << test_scores[0] << endl;
    cout << "Second Score: " << test_scores[1] << endl;
    cout << "Third Score: " << test_scores[2] << endl;
    cout << "Fourth Score: " << test_scores[3] << endl;
    cout << "Fifth Score: " << test_scores[4] << endl << endl;

    cout << "Test Scores using Vector Syntax: " << endl;

    cout << "First Score: " << test_scores.at(0) << endl;
    cout << "Second Score: " << test_scores.at(1) << endl;
    cout << "Third Score: " << test_scores.at(2) << endl;
    cout << "Fourth Score: " << test_scores.at(3) << endl;
    cout << "Fifth Score: " << test_scores.at(4) << endl << endl;

    test_scores.at(4) = 70;
    cout << "Size of test scores vector is: " << test_scores.size() << endl << endl;
    test_scores.push_back(80);
    test_scores.push_back(90);

    cout << "Newly added elements: " << test_scores.at(5) << " " << test_scores.at(6) << endl;
    cout << "size of test scores vector is: " << test_scores.size() << endl<< endl;
    //Throws an error - out_of_range
    //cout << test_scores.at(7); 

    vector <char> vowels {'a', 'e', 'i', 'o'};
    cout << "First Vowel: " << vowels.at(0) << endl;
    cout << "Second Vowel: " << vowels.at(1) << endl;
    cout << "Third Vowel: " << vowels.at(2) << endl;
    cout << "Fourth Vowel: " << vowels.at(3) << endl << endl;

    vowels.push_back('u');

    cout << "Fifth Vowel: (pushback)" << vowels.at(4) << endl;

    int score_to_add {0};
    cout << "Enter another test score: ";
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "All test scores extracted using for loop: " << endl;
    for(int i = 0; i < test_scores.size(); i++){
        cout << test_scores.at(i) << endl;
    }
    
    //Movie Ratings - 2d vector
    vector < vector <int> > twoVec = {
        {1, 2, 3}, {4, 5, 6}
    };

    cout << "2d Vector Access using Array Syntax: " << endl;
    cout << twoVec[0][0] << endl;
    cout << twoVec[0][1] << endl;
    cout << twoVec[0][2] << endl;
    cout << twoVec[1][0] << endl;
    cout << twoVec[1][1] << endl;
    cout << twoVec[1][2] << endl << endl;

    cout << "2d Vector Access using Vector Syntax: " << endl;
    cout << twoVec.at(0).at(0) << endl;
    cout << twoVec.at(0).at(1) << endl;
    cout << twoVec.at(0).at(2) << endl;
    cout << twoVec.at(1).at(0) << endl;
    cout << twoVec.at(1).at(1) << endl;
    cout << twoVec.at(1).at(2) << endl;
}
