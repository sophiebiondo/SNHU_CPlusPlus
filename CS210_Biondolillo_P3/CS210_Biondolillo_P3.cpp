#include <iostream> 
using namespace std;

vector<double> initBankValues();



int main() {

	vector<double> test = initBankValues;
	for (double num : test) {
		cout << num << endl;
	}


	return 0; 
}




vector<double> initBankValues() {

	vector<double> returnValues;
	double initInvestment = 0.0;
	double depositPerMonth = 0.0;
	double annualInterest = 0.0;
	double numYears = 0.0;
	char key;


	cout << "******************************************" << endl;
	cout << "**************  Data Input  **************" << endl << endl;

	cout << "Initial Investment Amount: $" << endl;
	try {
		cin >> initInvestment;
	}
	catch (cin.fail()) {
		cin.clear();
		cin >> initInvestment;
	}
	returnValues.push_back(initInvestment);


	cout << "Monthly Deposit: $" << endl;
	try {
		cin >> depositPerMonth;
	}
	catch (cin.fail()) {
		cin.clear();
		cin >> depositPerMonth;
	}
	returnValues.push_back(depositPerMonth);

	cout << "Annual Interest: %" << endl;
	try {
		cin >> annualInterest;
	}
	catch (cin.fail()) {
		cin.clear();
		cin >> annualInterest;
	}
	returnValues.push_back(annualInterest);


	cout << "Number of years: " << endl;
	try {
		cin >> numYears;
	}
	catch (cin.fail()) {
		cin.clear();
		cin >> numYears;
	}
	returnValues.push_back(numYears);

	cout << "Press any key to continue..." << endl;
	try {
		cin >> key;
		return returnValues;
	}
	catch (cin.fail()) {
		cout << "Error" << endl;
		cin.clear();
		cin >> key;
		return returnValues;
	}

	
	



}