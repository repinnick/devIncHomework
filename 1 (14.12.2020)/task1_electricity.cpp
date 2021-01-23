#include <iostream>

#define COST 0.209

using namespace std;

int main() {
	double kWh;

	cout << "Number of kW*h: ";
	cin >> kWh;
		
	if (kWh < 0){
		cout << endl << "Invalid data!";
	}
	else {
		cout << fixed;
		cout.precision(2);
		cout << endl << "You need to pay " << kWh * COST << " rubles.";
	}
	
	return 0;
}
