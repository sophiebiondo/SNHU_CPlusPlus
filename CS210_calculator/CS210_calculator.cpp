/*
 * Calculator.cpp
 *
 *  Date: [03/13/2025]
 *  Author: [Sophie Biondolillo]
 */

#include <iostream>


using namespace std;

int main()
{
	//Below declaration not used
	//char statement[100];
	//Seperated declarations in two
	int op1;
	int op2;
	char operation;
	char answer = 'y';

		//Changed 'y' to char instead of string
		//For memory purposes, changed every if after initial if to else if
		//Included built-in C++ function to change answer to lowercase
		while (tolower(answer) == 'y') {
		
			cout << "Enter expression" << endl;
			cin >> op2 >> operation >> op1;

			//Changed "+" to '+'
			//Changed >> to <<
			if (operation == '+') {
				cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
			}
			else if (operation == '-') {
				//Changed cout >> to cout <<
				cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
			}

			else if (operation == '*') {
				//Added a ;
				//Changed text to match operator
				cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
			}
			else if (operation == '/') {
				//Changed text to match operator
				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
			}

			cout << "Do you wish to evaluate another expression? " << endl;
			cin >> answer;

			//Added a quit loop
			if (tolower(answer) == 'n') {
				cout << "Program finished. ";
			}
		}


		return 0;
}
