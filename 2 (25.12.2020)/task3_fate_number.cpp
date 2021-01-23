#include <iostream>
#include <sstream>

using namespace std;

bool checkDate(int day, int month, int year);
int dateJoin(int day, int month, int year);
int fateNumber(int num);


int main() {
	int day, month, year;
	
	cout << "Input date (format: 22 02 2019): ";
	cin >> day >> month >> year;
	
	if (checkDate(day, month, year)){
		int joinNum = dateJoin(day, month, year);
		cout << endl << "Your fate number: " << fateNumber(joinNum);
	}
	else{
		cout << endl << "Invalid date!";
	}

	return 0;
}

bool checkDate(int day, int month, int year){
	
	if (month >= 1 && month <= 12){
		switch(month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (day >= 1 && day <= 31 && year > 0){
					return true;
				}else {
					return false;
				}
			case 2:
				if (day >= 1 && day <= 28 && year > 0){
					return true;
				}else {
					return false;
				}	
			case 4:
			case 6:
			case 9: 
			case 11: 
				if (day >= 1 && day <= 30 && year > 0){
					return true;
				}else {
					return false;
				}
			}
	}else{
		return false;
	}
}

int dateJoin(int day, int month, int year){
    int num;
    stringstream str;

    str << day << month << year;
    str >> num;

    return num;
}

int fateNumber(int num){
    while (num > 9){
        int temp = 0;
        while (num != 0){
            temp += num % 10;
            num /= 10;
        }
        num = temp;
    }
    return num;
}
