//tic tac toe game by david
//created on may 30 2022
//my first attempt to create a program
//with some help online 
//here goes nothing

#include <iostream>
#include <string>
#include "tictactoe.h"
// using namespace std;


int main()
{
	cout << "Enter Name of First Player  :  ";
	getline(cin, n1);
	cout << "Enter Name of Second Player  :  ";
	getline(cin, n2);
	cout << "\n";
	cout << n1 << " is player1 so he/she will play first  \n";
	cout << n2 << " is player2 so he/she will play Second \n";
	cout << "\n";

	while (!functionThree())
	{
		functionOne();
		functionTwo();
		functionThree();
	}

	if (token == 'X' && tie == false)
	{
		cout << n2 << "Wins!!!!!!!!!!!!!!!!" << endl;
	}
	else if (token == 'O' && tie == false)
	{
		cout << n1 << "Wins!!!!!!!!!!!!!!!!!" << endl;
	}
	else {
		cout << "It's a draw fam. Good game g" << endl;
	}
}
