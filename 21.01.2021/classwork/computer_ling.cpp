/*********************************************
Ab. 1
",.!; ?" - razdeliteli / separators




*********************************************/

#include <iostream>
#include <cstdlib>
#include <cstring>

#define N 128

using namespace std;

bool isSeparator(char c);
char letterInWords(char text[]);

int main()
{
	char text[N], word[N];
	int iw = 0;
	int counterWord = 0;
	
	int x = 0;
	
	char tempWord[N];
	
	cout << "Input text: ";
	cin.getline(text, N);
	
	for (int i = 0; text[i] != '\0'; i++){
		if (!isSeparator(text[i])){
			word[iw] = text[i];
			iw++;
			if(isSeparator(text[i + 1]) or text[i + 1] == '\0'){
				word[iw] = '\0';
				
				if (iw > x){
					x = iw;
					tempWord[N] = {};
					strcpy(tempWord, word);
				}
				
				iw = 0;
				counterWord++;
			} 
		}	
	}
	
//	cout << tempWord << endl;
//	cout << endl << "Words in text: " << counterWord;
	cout << letterInWords(text);
	
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

char letterInWords(char text[]){
	text = strlwr(text);
	char letter = 'a';
	char letter2;
	int counter = 0;
	int counter2 = 0;
	
	while (letter <= 'z'){
		counter = 0;
		
		for (int i = 0; i < strlen(text); i++){
			if(text[i] == letter){
				counter++;
			}
		}
		if (counter > counter2){
			letter2 = letter;
			counter2 = counter;
		}
		
		letter++;
	}
	
	return letter2;
}
