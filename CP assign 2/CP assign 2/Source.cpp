#include <iostream>
using namespace std;

void main()
{
    int result, user_input;
    cout << "Input number: ";
    cin >> user_input;

    if (user_input < 0 || user_input > 101)
    {
        result = -1;
        cout << "Result = " << result << endl;
    }
    else if (user_input < 6) {
        result = 0;
        cout << "Result = " << result << endl;
    }
    else if (user_input < 13) {
        result = 1;
        cout << "Result = " << result << endl;
    }
    else if (user_input < 20) {
        result = 2;
        cout << "Result = " << result << endl;
    }
    else if (user_input < 51) {
        result = 3;
        cout << "Result = " << result << endl;
    }
    else if (user_input < 61) {
        result = 4;
        cout << "Result = " << result << endl;
    }
    else if (user_input < 101) {
        result = 5;
        cout << "Result = " << result << endl;
    }
    else {
        cout << "Invalid input, try again!";
    }
}
