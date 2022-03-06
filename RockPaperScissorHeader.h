#ifndef ROCKPAPERSCISSORHEADER_H_INCLUDED
#define ROCKPAPERSCISSORHEADER_H_INCLUDED
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int GameMenu();
int GetUserChoice();
int GetComputerChoice();
int GetComputerChoice();
bool DetermineWinner(int userChoice, int compChoice);
void DisplayChoice (int choice, string user);



#endif // ROCKPAPERSCISSORHEADER_H_INCLUDED
