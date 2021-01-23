#include <iostream>

#define N 128

using namespace std;

bool isDigit(char x);

int main()
{
	char text[N] = "so527me text '523' and sume numbers 632"; 
	char newText[N] = "";
	char number;
	
	
	int itext = 0;
	
	for (int i = 0; text[i] != '\0'; i++){
		
		if(isDigit(text[i])){
			int num = text[i] - '0';
			
			for (int j = 0; j < num; j++){
				if (num % 2 == 0)
					newText[itext] = '+';
				else
					newText[itext] = '-';
				itext++;
				}
		}
		else {
			newText[itext] = text[i];
			itext++;
		}
	}
	
	cout << newText;
	
	return 0;
}

bool isDigit(char x)
{
	if (x >= '0' and x <= '9')
		return true;
	return false;
}
