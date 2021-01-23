#include <iostream>

using namespace std;

bool binaryOnes(int n);
void mathBinary(int n);

int main() {
	int n = 0, counter = 0;
	
	cout << "Enter a range from 1 to ";
	cin >> n;
	
	cout << endl << "In the binary system, these numbers are consist of ones: " << endl;
	for (int i = 1; i <= n; i++){
		if (binaryOnes(i)){
			counter++;
			cout << counter << ") " << i << endl;
		}
	}

	cout << endl << "Math: ";
	mathBinary(n);
	
	return 0;
}

bool binaryOnes(int n){
	
	while (n != 0){
		if (n % 2 == 0){
			return false;
		}
		n /= 2;
	}
	return true;
}

void mathBinary(int n){
	int output = 1;
	
	while (output <= n){
		cout << output << " ";
		output += (output + 1);
	}
}
