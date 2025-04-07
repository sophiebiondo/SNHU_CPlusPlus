//Author: Sophie Biondolillo
//Date: 03/18/2025
//Purpose: Clock application for Chada Tech


#include <iostream>
#include <string>
using namespace std;

string zero = "0";

int printMenu();
int initHour();
int initMinute();
int initSecond();
int addHour(int updateHour);
int addMinute(int updateMinute);
int addSecond(int updateSecond);
void printClock(int updateHour, int updateMinute, int updateSecond);





int main() {


	cout << "Welcome to Chada Tech's clock interface. " << endl;
	cout << "You will start by initializing the clock. " << endl;

	int mainHour = initHour();
	int mainMinute = initMinute();
	int mainSecond = initSecond();

	int userChoice = printMenu();

	while (userChoice != 4) {
		if (userChoice == 1) {
			int newHour = addHour(mainHour);
			printClock(newHour, mainMinute, mainSecond);
			
		}
		else if (userChoice == 2) {
			int newMinute = addMinute(mainMinute);
			printClock(mainHour, newMinute, mainSecond);
			
		}
		else if (userChoice == 3) {
			int newSecond = addSecond(mainSecond);
			printClock(mainHour, mainMinute, newSecond);
			
		}
		
		userChoice = printMenu();
	}

	return 0;
}


//Prints menu and returns user choice
int printMenu() {

	int option = 0;

	cout << "*************************" << endl;
	cout << "* 1 - Add One Hour      *" << endl << endl;
	cout << "* 2 - Add One Minute    *" << endl << endl;
	cout << "* 3 - Add One Second    *" << endl << endl;
	cout << "* 4 - Exit Program      *" << endl;
	cout << "*************************" << endl;

	cin >> option;

	//User input validation
	if (option < 1 || option > 4) {
		cout << "Invalid user input. Try again. " << endl;
		cin.clear();
		cin >> option;
	}

	return option;
}

//Initializes hour value
int initHour() {

	int hour;
	cout << "Your input should be based off of a 24-hour clock format. " << endl;
	cout << "Please input a number 0-24 for hour. " << endl;
	cin >> hour;


	bool validHourInput = false;

	//User input validation
	while (validHourInput == false) {
		cin.clear();
		if (hour > 24 || hour < 0) {

			cout << "Invalid user input. Try again. " << endl;
			cin >> hour;

		}
		else {
			validHourInput = true;

		}
	}

	return hour;
}

//Initializes minute value
int initMinute() {

	int minute;
	cout << "Please input a number 0-59 for minute. " << endl;
	cin >> minute;

	bool validMinuteInput = false;

	//User input validation
	while (!validMinuteInput) {
		cin.clear();
		if (minute > 59 || minute < 0) {
			cin.clear();
			cout << "Invalid user input. Try again. " << endl;
			cin >> minute;

		}
		else {
			validMinuteInput = true;

		}
	}

	return minute;
}


int initSecond() {

	int second;
	cout << "Please input a number 0-59 for second. " << endl;
	cin >> second;

	bool validSecondInput = false;

	//User input validation
	while (!validSecondInput) {
		cin.clear();
		if (second > 59 || second < 0) {
			cin.clear();
			cout << "Invalid user input. Try again. " << endl;
			cin >> second;

		}
		else {
			validSecondInput = true;

		}
	}

	return second;
}


int addHour(int updateHour) {



	//Increment hour using integer value if valid initial value
	if (updateHour == 24) {
		cout << "Cannot increment hour." << endl;
		return updateHour;
	}

	else {
		updateHour += 1;
	}

	return updateHour;
}


int addMinute(int updateMinute) {



	//Increment minute if valid initial value
	if (updateMinute == 59) {
		cout << "Cannot increment minute." << endl;
		return updateMinute;
	}

	else if (updateMinute != 59) {
		updateMinute += 1;
	}

	

	return updateMinute;
}


int addSecond(int updateSecond) {



	//Increment second if valid initial value
	if (updateSecond == 59) {
		cout << "Cannot increment second." << endl;
		return updateSecond;
	}

	else {
		updateSecond += 1;
	}


	return updateSecond;
}


void printClock(int updateHour, int updateMinute, int updateSecond) {
	// Converting to string for standardized print
	string firstStatement;
	string secondStatement;
	string stringMinute;
	string stringSecond;
	string stringHour;
	string colon = ":";

	// Hour conversion for 12-Hour Clock
	string halfDay = (updateHour < 12) ? " AM" : " PM";
	int twelveHour = (updateHour == 0) ? 12 : (updateHour > 12 ? updateHour - 12 : updateHour);

	// Convert hours, minutes, and seconds to strings with padding
	string stringTwelveHour = (twelveHour < 10 ? "0" : "") + to_string(twelveHour);
	string stringTwentyFourHour = (updateHour < 10 ? "0" : "") + to_string(updateHour);
	stringMinute = (updateMinute < 10 ? "0" : "") + to_string(updateMinute);
	stringSecond = (updateSecond < 10 ? "0" : "") + to_string(updateSecond);

	// Construct statements
	firstStatement = stringTwelveHour + colon + stringMinute + colon + stringSecond + halfDay;
	secondStatement = stringTwentyFourHour + colon + stringMinute + colon + stringSecond;

	// Output
	cout << " **********************************                           ********************************** " << endl;
	cout << " *         12 Hour Clock          *                           *         24 Hour Clock          * " << endl << endl;
	cout << " *          " << firstStatement << "          *                           *            " << secondStatement << "          * " << endl << endl;
	cout << " **********************************                           ********************************** " << endl;

	return;
}