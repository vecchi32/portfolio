#include "RockPaperScissorHeader.h"

/**********************************************************************
 *Method Name    :   GameMenu
 *Author         :   Chris Vecchiarelli
 *Date           :   9/23/2021
 *Course/Section :   263-502
 *
 *Method Description: Display method for user to choose Rock, Paper or
 *Scissors. Returns user selection as an int.
 *********************************************************************/
int GameMenu()
{
    int menuSelect;

    cout << setw(36) << "ROCK PAPER SCISSOR" << endl
         << setw(36) << "------------------" << endl
         << setw(36) << "| 1 - Rock       |" << endl
         << setw(36) << "| 2 - Paper      |" << endl
         << setw(36) << "| 3 - Scissors   |" << endl
         << setw(36) << "------------------" << endl
         << setw(43) << "Rock, Paper or Scissors? ";

    cin  >> menuSelect;


    return menuSelect;
}

/**********************************************************************
 *Method Name    :   GetUserChoice
 *Author         :   Chris Vecchiarelli
 *Date           :   9/23/2021
 *Course/Section :   263-502
 *
 *Method Description: Calls on menu to allow user to make selection,
 *then checks to see if user input is a valid choice between 1-3. Then
 *displays the user's choice.
 *********************************************************************/
int GetUserChoice()
{
    int userChoice;
    string user = "User";
    bool validEntry = false;

    do
    {
        userChoice = GameMenu();

        if (userChoice >= 1 && userChoice <= 3)
        {
            validEntry = true;
            DisplayChoice(userChoice, user);
            return userChoice;
        }

        else
            cout << setw(47) << "Invalid Selection, try again." << endl;

    }
    while (validEntry != true);



}

/**********************************************************************
 *Method Name    :   GetComputerChoice
 *Author         :   Chris Vecchiarelli
 *Date           :   9/23/2021
 *Course/Section :   263-502
 *
 *Method Description:Randomly generate a number between 1-3 to use as
 *the computer's choice for the game. Then return the int.
 *
 *********************************************************************/
int GetComputerChoice()
{
    int compChoice;
    string comp = "Computer";
    srand(time(0));
    compChoice = (rand() % abs(3) + 1);

    DisplayChoice(compChoice, comp);

    return compChoice;
}

/**********************************************************************
 *Method Name    :   DetermineWinner
 *Author         :   Chris Vecchiarelli
 *Date           :   9/23/2021
 *Course/Section :   263-502
 *
 *Method Description:Check if the user and comp have chosen the same
 *option, if they have return a false to main to rerun the game.
 * If not, check if the user has won. If user has won display
 *that the user has won, and return true that someone has won to main.
 *********************************************************************/
bool DetermineWinner(int userChoice, int compChoice)
{
    const int ROCK = 1;
    const int PAPER = 2;
    const int SCISSORS = 3;
    bool winner = false;


    if (userChoice == compChoice)

        winner = false;

    else
    {
        winner = true;

        if (((userChoice == ROCK && compChoice == SCISSORS) || (userChoice == SCISSORS && compChoice == PAPER)) || (userChoice == PAPER && compChoice == ROCK))

            cout << setw(26) << "You WON!" << endl;

        else

            cout << setw(35) << "The Computer won." << endl;
    }


    return winner;
}

/**********************************************************************
 *Method Name    :   DisplayChoice
 *Author         :   Chris Vecchiarelli
 *Date           :   9/23/2021
 *Course/Section :   263-502
 *
 *Method Description:Displays the choice of either the user, or the
 *computer, depending on which method calls this method.
 *
 *********************************************************************/
void DisplayChoice (int choice, string user)
{
    const int ROCK = 1;
    const int PAPER = 2;
    const int SCISSORS = 3;
    string selection;

    if (choice == ROCK)
        selection = "Rock";
    else if (choice == PAPER)
        selection = "Paper";
    else
        selection = "Scissors";

    cout << setw(26) << user << " has chosen " << selection << endl;
}
