#include <iostream>
using namespace std;
int main()
{
    int test_score[5] {};
    cout << test_score[0] << endl;
    cout << test_score[1] << endl;
    cout << test_score[2] << endl;
    cout << test_score[3] << endl;
    cout << test_score[4] << endl;

    int testArr[5] = {1, 2, 3, 4, 5};
    cout << "Test Array: " << endl;
    for(int i = 0; i < sizeof(testArr) / sizeof(testArr[0]); i++){
        cout << testArr[i] << endl;
    }
}
