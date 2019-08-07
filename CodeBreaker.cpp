#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void PrintIntro()
{
    // Print intro for user.
    cout << "You have been locked in a room with an electronically-controlled lock...\n";
    cout << "You must enter the correct code to continue...\n\n";
}

void PlayGame()
{
    PrintIntro();

    int Num1 = 4;
    int Num2 = 6;
    int Num3 = 1;

    int CodeSum = Num1 + Num2 + Num3;
    int CodeProduct = Num1 * Num2 * Num3;

    // Print CodeSum and CodeProduct for the user.
    cout << "+ There are 3 numbers in the code." << endl;
    cout << "+ The code adds up to: " << CodeSum << endl;
    cout << "+ The code multiplies to give: " << CodeProduct << endl;

    int Guess1, Guess2, Guess3;

    // Extract PlayerGuess.
    cin >> Guess1 >> Guess2 >> Guess3;

    int GuessSum = Guess1 + Guess2 + Guess3;
    int GuessProduct = Guess1 * Guess2 * Guess3;

    // Check if player's guess is correct or not.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "You Win!\n" ;
    }
    else
    {
        cout << "Nope!\n";
    }
}

int main()
{
    PlayGame();
    return 0;
}