#include <iostream>
#include <windows.h>

#define N 10

using namespace std;

void printArray(char array[], int size);
void recruitsPosition(char array[], int size);

int main()
{
	char recruits[N] = {'<', '>', '<', '>', '<', '>', '<', '>', '<', '>'};
	
	cout << "Source array: ";
	printArray(recruits, N);
	cout << endl << endl;
	
	recruitsPosition(recruits, N);
	
	return 0;
}

void printArray(char array[], int size)
{
	for (int i = 0; i < N; i++){
		cout << array[i] << " ";
	}
}

void recruitsPosition(char array[], int size)
{
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size - 1; j++){
			if (array[j] == '>' and array[j + 1] == '<'){
				char temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		Sleep(1000);
		printArray(array, size);
		cout << "\r";
	}
}
