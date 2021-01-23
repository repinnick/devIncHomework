#include <iostream>

using namespace std;

int main() {
	double persent;
	int mutants, destroy, counter = 0;
	
	cout << "Enter the number of mutants: ";
	cin >> mutants;
	cout << "Enter the reproduction rate per day: ";
	cin >> persent;
	cout << "Enter the number of mutants to be destroyed every day: ";
	cin >> destroy;
	
	if (mutants < 0 or persent < 0 or destroy < 0){
		cout << endl << "Invalid data!";
	} 
	else {
		if (int (mutants * (persent / 100)) >= destroy){
			cout << endl << "AAA!!! Our planet will be destroyed by mutants!";
		}
		else {
			while (mutants > 0){
				mutants = (mutants + (mutants * (persent / 100))) - destroy;
				counter++;
			}
			cout << endl << "It will take " << counter << " days to destroy the mutants.";	
		}
	}
	
	
	
	return 0;
}
