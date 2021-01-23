#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1, y1, x2, y2;
		
	cout << "Enter coordinates for the FIRST knight." << endl;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << endl << "Enter coordinates for the SECOND knight." << endl;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	
	if (x1 >= 1 && x1 <= 8 && x2 >= 1 && x2 <= 8 && y1 >= 1 && y1 <=8 && y2 >= 1 && y2 <=8){
		if (x1 == x2 and y1 == y2){
			cout << endl << "It's impossible! You enter one position for both figures!";
		}
		else if (abs((x1 - x2) * (y1 - y2)) == 2){
			cout << endl << "Yes! You took a KNIGHT of your opponent." << endl;
		}
		else{
			cout << endl << "Sorry, but you cannot take KNIGHT." << endl;
		}
	}
	else{
		cout << endl << "Error! Invalid coordinates!";	
	}
	
	return 0;
}
