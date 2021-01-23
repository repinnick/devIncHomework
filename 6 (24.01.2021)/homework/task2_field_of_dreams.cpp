#include <iostream>
#include <windows.h>
#include <cstring>

#define N 128
#define EMPTY ' '

using namespace std;

void printField(char word[], int size);
bool isEqual(char word[], char guessWord[], int size);

int main()
{
	char word[N] = "conversation";
	char inputLetter[N];
	
	int size = strlen(word);
	char guessWord[size] = {EMPTY};

	printField(guessWord, size);
	
	while (!isEqual(word, guessWord, size)){
		cout << "Enter the letter: ";
		cin >> inputLetter;
		cout << endl;
		
		
		if (strlen(inputLetter) == size and isEqual(word, inputLetter, size))
			for (int i = 0; i < strlen(word); i++)
				guessWord[i] = inputLetter[i];
		else 
			for (int i = 0; word[i] != '\0'; i++)
				if (inputLetter[0] == word[i])
					guessWord[i] = inputLetter[0];
		
		printField(guessWord, size);	
	}
	
	return 0;
}

void printField(char word[], int size)
{
	system("cls");
	for (int i = 0; i < size; i++){
		if (i == 0)
			cout << "| " << word[i] << " | ";
		else
			cout << word[i] << " | ";
	}
	cout << endl << endl;
}

bool isEqual(char word[], char guessWord[], int size)
{
	for (int i = 0; i < size; i++){
		if (guessWord[i] != word[i])
			return false;
	}	
	return true;
}



