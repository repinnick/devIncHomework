#include <iostream>
#include <windows.h>
#include <cstring>

#define N 128
#define EMPTY ' '

using namespace std;

int sizeOfArray(char word[]);
void printField(char word[], int size);
bool isEqual(char word[], char guessWord[], int size);

//getchar()

int main()
{
	char word[N] = "conversation";
	char inputLetter;
	
	int size = sizeOfArray(word);
	char guessWord[size] = {EMPTY};

	printField(guessWord, size);
	while (!isEqual(word, guessWord, size)){
		
		
		cout << "Enter the letter: ";
		cin >> inputLetter;
		cout << endl;
		
		for (int i = 0; word[i] != '\0'; i++){
			if (inputLetter == word[i]){
				guessWord[i] = inputLetter;
			}
		}
		
		printField(guessWord, size);
//		int letterSize = sizeOfArray(inputLetter);
			
	}
	
	return 0;
}

int sizeOfArray(char word[])
{
	int i = 0;
	
	for (; word[i] != '\0'; i++)
		;
	return i;
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



