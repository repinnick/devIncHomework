#include <iostream>

#define N 128

using namespace std;

bool isSeparator(char c);
bool isEqual(char tempWord[], char word[]);
void writeTempWord(char tempWord[], char word[]);

int main()
{
	char text[N], word[N], newText[N];
	int iw = 0;
	
	char tempWord[N];
	
	cout << "Input text: ";
	cin.getline(text, N);
	
	for (int i = 0; text[i] != '\0'; i++){
		if (!isSeparator(text[i])){
			word[iw] = text[i];
			iw++;
			if(isSeparator(text[i + 1]) or text[i + 1] == '\0'){
				word[iw] = '\0';
				if (isEqual(tempWord, word)){
					cout << "EQUAL! " << word << endl;
				}
				else
					writeTempWord(tempWord, word);
				iw = 0;
			} 
		}
//		newText[i] = text[i];
	}
	
	cout << "Temp: " << tempWord << endl;
	cout << "Word: " << word << endl;
	cout << "New text: " << newText << endl;

	return 0;
}

bool isSeparator(char c)
{
	char s[] = ",.!; ?";
	
	for (int i = 0; s[i] != '\0'; i++)
		if (c == s[i])
			return true;
	
	return false;
}

bool isEqual(char tempWord[], char word[])
{
	for (int i = 0; word[i] != '\0'; i++){
		if (tempWord[i] != word[i])
			return false;
	}	
	return true;
}

void writeTempWord(char tempWord[], char word[])
{	int i = 0;
	for ( ; word[i] != '\0'; i++){
		tempWord[i] = word[i];
	}
	tempWord[i] = '\0';
}
