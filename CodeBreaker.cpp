#include <iostream>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

void PrintIntro(int Difficulty)
{
    // Print intro for user.
    cout << "\n\nYou have been locked in a room with a Level " << Difficulty << " electronically-controlled lock...\n";
    cout << "You must enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntro(Difficulty);

    int Num1 = rand() % (2 * Difficulty) + 1;
    int Num2 = rand() % (2 * Difficulty) + 1;
    int Num3 = rand() % (2 * Difficulty) + 1;

    int CodeSum = Num1 + Num2 + Num3;
    int CodeProduct = Num1 * Num2 * Num3;

    // Print CodeSum and CodeProduct for the user.
    cout << "+ There are 3 numbers in the code and each number can be 1 through 22." << endl;
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
        cout << "You solved the code!\n" << "The next room will be more difficult!\n" ;
        return true;
    }
    else
    {
        cout << "Incorrect code. Try again\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // create new random sequence based on time of day

    int LevelDifficulty = 1;
    const int MAXDIFFICULTY = 11; // Because Spinal Tap

    while(LevelDifficulty <= MAXDIFFICULTY)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); // Clears input errors
        cin.ignore(); // Removes buffer

        // If player completes the level:
        if (bLevelComplete)
        {
            // Increase level difficulty
            LevelDifficulty++;
        }
    }    

    cout << "\n***** Well done! You have escaped! *****\n";
    return 0;    
}