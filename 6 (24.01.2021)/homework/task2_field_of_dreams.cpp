#include <iostream>
#include <windows.h>
#include <cstring>

#define N 128
#define EMPTY ' '

using namespace std;

void printField(char word[], int size, char question[]);
bool isEqual(char hiddenWord[], char guessWord[], int size);

int main()
{
	char question[N] = "In what season do people ski?";
	char hiddenWord[N] = "winter";
	
	cout << hiddenWord << endl;
	
	char inputLetter[N];
	
	int size = strlen(hiddenWord);
	char guessWord[size] = {EMPTY};

	printField(guessWord, size, question);
	
	while (!isEqual(hiddenWord, guessWord, size)){
		cout << "Enter the letter: ";
		cin >> inputLetter;
		cout << endl;
		
		if (strlen(inputLetter) == size and isEqual(hiddenWord, inputLetter, size))
			for (int i = 0; i < strlen(hiddenWord); i++)
				guessWord[i] = inputLetter[i];
		else if (strlen(inputLetter) == 1)
			for (int i = 0; hiddenWord[i] != '\0'; i++)
				if (inputLetter[0] == hiddenWord[i])
					guessWord[i] = inputLetter[0];
		
		printField(guessWord, size, question);	
	}
	
	return 0;
}

void printField(char word[], int size, char question[])
{
	system("cls");
	cout << question << endl << endl;
	for (int i = 0; i < size; i++){
		if (i == 0)
			cout << "| " << word[i] << " | ";
		else
			cout << word[i] << " | ";
	}
	cout << endl << endl;
}

bool isEqual(char hiddenWord[], char guessWord[], int size)
{
	for (int i = 0; i < size; i++){
		if (guessWord[i] != hiddenWord[i])
			return false;
	}	
	return true;
}




