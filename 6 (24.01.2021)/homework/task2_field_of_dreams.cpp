#include <iostream>
#include <windows.h>
#include <cstring>

#define N 128
#define EMPTY ' '

using namespace std;

void printField(char [], int size);
bool isEqual(char hiddenWord[], char guessWord[], int size);
//void questions(char hiddenWord[N], char question[N]);

int main()
{
	char hiddenWord[N] = "winter";
	char inputLetter[N];
	
	int size = strlen(hiddenWord);
	char guessWord[size] = {EMPTY};

	printField(guessWord, size);
	
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

bool isEqual(char hiddenWord[], char guessWord[], int size)
{
	for (int i = 0; i < size; i++){
		if (guessWord[i] != hiddenWord[i])
			return false;
	}	
	return true;
}
//
//void questions(char hiddenWord[N], char question[N])
//{
//	int random = 1;
//	if (random == 1){
//		hiddenWord = "winter";
//		question = "In what season do people ski?";
//	}
//}



