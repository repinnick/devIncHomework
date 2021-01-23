#include <iostream>

using namespace std;

int fibonacci(int n);
int sumOfFibonacci(int n);

int main() {
	int n = 0;
	
	cout << "Enter the n-th member of the Fibonacci series: ";
	cin >> n;
	cout << endl;
	
	if (n <= 0){
		cout << "Invalid data! Please, enter the number > 0!";
	}
	else {
		for (int i = 0; i < n; i++){
			cout << fibonacci(i) << " ";
		}
		
		cout << endl << endl << "Sum of Fibonacci series: " << sumOfFibonacci(n);
	}
	
	return 0;
}

int fibonacci(int n){
	int a = 1, b = 0;
	
	for (int i = 0; i < n; i++){
		int temp = a;
		a += b;
		b = temp;
	}
	
	return a;
}

int sumOfFibonacci(int n){
	int sum = 0;
	
	for (int i = 0; i < n; i++){
		sum += fibonacci(i);
	}
	
	return sum;
}
