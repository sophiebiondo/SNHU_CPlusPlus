#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	ifstream file("FahrenheitTemperature.txt");
	if (!file.is_open()) {
		cout << "Failed to open the file." << endl;
		return 1;
	}

	vector<int> temperatures;
	vector<string> cities;
	string line;

	while (getline(file, line)) {
		try {
			int temp = stoi(line);
			temperatures.push_back(temp);
		}
		catch (const invalid_argument&) {
			cities.push_back(line);
		}
	}
	file.close();


	vector<double> celsiusTemperatures;
	for (int temp : temperatures) {
		celsiusTemperatures.push_back((temp - 32) * (5.0 / 9.0));
	}

	ofstream output("CelsiusTemperature.txt");
	if (!output.is_open()) {
		cout << "Failed to create the output file." << endl;
		return 1;
	}

	int count = 0;
	for (double temp : celsiusTemperatures) {
		output << cities[count] << " " << temp << endl;
		cout << cities[count] << " " << temp << endl;
		count++;
	}
	output.close();

	return 0;
}