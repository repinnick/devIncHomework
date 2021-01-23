#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1, y1, x2, y2;
	
	cout << "Enter coordinates for the FIRST bishop." << endl;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << endl << "Enter coordinates for the SECOND bishop." << endl;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	
	if (x1 >= 1 && x1 <= 8 && x2 >= 1 && x2 <= 8 && y1 >= 1 && y1 <=8 && y2 >= 1 && y2 <=8){
		if (x1 == x2 and y1 == y2){
			cout << endl << "It's impossible! You enter one position for both figures!";
		}
		else if (abs(x1 - x2) == abs(y1 - y2)){
			cout << endl << "Yes! You took a figure of your opponent.";
		}
		else{
			cout << endl << "Sorry, but you cannot take this figure.";
		}
	}
	else{
		cout << endl << "Error! Invalid coordinates!";	
	}
	
	return 0;
}
