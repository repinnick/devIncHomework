#include <iostream>

#define N 10

using namespace std;

void printArray(int array[], int size);
bool isDegreeOfTwo(int num);
bool isArrayCheck(int array[], int size);
void printNumsDegreeOfTwo(int array[], int size);

int main()
{
	int numbers[N] = {256, 1, 4, 8, 2, 56, 64, 254, 16, 84};
//	int numbers[N] = {254, 12, 3, 7, 3, 56, 65, 254, 17, 84};
	
	cout << "Initial array: ";
	printArray(numbers, N);
	
	bool flag = isArrayCheck(numbers, N);
	
	if (flag){
		cout << endl << endl << "Numbers that are powers of two: ";
		printNumsDegreeOfTwo(numbers, N);
	}
	else{
		cout << endl << endl << "There are no numbers in the array that are powers of two!";
	}
	
	return 0;
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
}

bool isDegreeOfTwo(int num)
{
	while(num != 0){
		if (num == 1)
			return true;
		else if (num % 2 == 0)
			num /= 2;
		else
			return false;
	}
	
	return true;
}

bool isArrayCheck(int array[], int size)
{
	for (int i = 0; i < size; i++)
		if (isDegreeOfTwo(array[i]))
			return true;
	return false;
}

void printNumsDegreeOfTwo(int array[], int size)
{
	for (int i = 0; i < N; i++)
		if (isDegreeOfTwo(array[i]))
			cout << array[i] << " ";
}
