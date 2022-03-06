#include <iostream>
#include "RockPaperScissorHeader.h"

using namespace std;

int main()
{
    const char QUIT = 'N';
    const char KEEP_PLAYING = 'Y';
    char playAgain;
    int userChoice;
    int compChoice;
    bool winner = false;

    do
    {
        while(winner != true)
        {
            userChoice = GetUserChoice();
            compChoice = GetComputerChoice();
            winner = DetermineWinner(userChoice, compChoice);
        }

        cout << setw(53) << "Would you like to play again? (Y/N)";
        cin >> playAgain;
        while(playAgain != QUIT && playAgain != KEEP_PLAYING)
        {
            cout << setw(49) << "Invalid Entry. Enter 'Y' or 'N'" << endl;
            cout << setw(53) << "Would you like to play again? (Y/N)";
            cin >> playAgain;

        }

        winner = false;
        cout << "\n\n";

    }while (playAgain != QUIT);


    }
