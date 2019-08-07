#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Print intro for user.
    cout << "You have been locked in a room with an electronically-controlled lock..." << endl;
    cout << "You must enter the correct code to continue..." << endl;

    int Num1 = 4;
    int Num2 = 6;
    int Num3 = 1;

    int CodeSum = Num1 + Num2 + Num3;
    int CodeProduct = Num1 * Num2 * Num3;

    // Print CodeSum and CodeProduct for the user.
    cout << endl; 
    cout << "+ There are 3 numbers in the code." << endl;
    cout << "+ The code adds up to: " << CodeSum << endl;
    cout << "+ The code multiplies to give: " << CodeProduct << endl;

    int PlayerGuess;

    return 0;
}