#include <iostream>
#include <windows.h>

#define SIZE 9
#define WIN_COMBINATIONS 8
#define USER 'X'
#define COMPUTER 'O'
#define TIE 'T'
#define GAME_NOT_END 'N'

using namespace std;

void printField(char array[], int size);
char whoesMove(char opponent);
bool isEmptyCell(char array[], int choice);
void userCellChoice(char array[], int move);
char whoIsTheWinner(char array[]);
int computerChoice(char array[]);
void anounseTheWinner(char winner);

int main()
{
	char field[SIZE] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int choice = 0;
	char turn = USER;
	
	printField(field, SIZE);
	
	while (whoIsTheWinner(field) == GAME_NOT_END){
		
		if (turn == USER){
			cout << endl << "Your choice: ";
			cin >> choice;
			
			if (isEmptyCell(field, choice))
				userCellChoice(field, choice);
			else
				continue;
		}
		else{
			choice = computerChoice(field);
			field[choice] = COMPUTER;
		}
		
		turn = whoesMove(turn);
		printField(field, SIZE);
	}

	anounseTheWinner(whoIsTheWinner(field));
	
	return 0;
}

void printField(char array[], int size)
{
	system("cls");
	
	cout << "-------------" << endl;
	
	for (int i = 0; i < size; i++){
		if (i == 0 or i == 3 or i == 6){
			cout << "| " << array[i] << " |";
		}else
			cout << " " << array[i] << " |";
		
		if (i == 2 or i == 5){
			cout << endl;
			cout << "-------------" << endl;
		}
	}
	
	cout << endl << "-------------" << endl;
}

char whoesMove(char opponent)
{
	if(opponent == USER){
		return COMPUTER;
	}
	else{
		return USER;
	}
}

bool isEmptyCell(char array[], int choice)
{
	if (array[choice - 1] != USER and array[choice - 1] != COMPUTER)
		return true;
		
	return false;
}

void userCellChoice(char array[], int move)
{
	array[move - 1] = USER;
}

char whoIsTheWinner(char array[])
{
	int combinationSize = 3;
	int counter = 0;
	
	const int COMBINATIONS[WIN_COMBINATIONS][combinationSize] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 4, 7}, 
																{2, 5, 8}, {3, 6, 9}, {1, 5, 9}, {3, 5, 7}};
	
	for (int i = 0; i < WIN_COMBINATIONS; i++){
		if ((array[COMBINATIONS[i][0] - 1] == USER or array[COMBINATIONS[i][0] - 1] == COMPUTER) and
			array[COMBINATIONS[i][0] - 1] == array[COMBINATIONS[i][1] - 1] and
			array[COMBINATIONS[i][0] - 1] == array[COMBINATIONS[i][2] - 1])
			{
				return array[COMBINATIONS[i][0] - 1];
			}	
	}
	for (int i = 0; i < SIZE; i++){
		if (array[i] == USER or array[i] == COMPUTER){
			counter++;
		}
	}
	
	if (counter == SIZE){
		return TIE;
	}
	
	return GAME_NOT_END;
	
}

int computerChoice(char array[])
{
	bool flag = false;
	int move = 0;
	
	while (!flag and move < SIZE){
		char temp = array[move];
		
		if(isEmptyCell(array, move + 1)){
			array[move] = COMPUTER;
			flag = whoIsTheWinner(array) == COMPUTER;
			array[move] = temp;
		}
		if (!flag){
			move++;
		}
	}

	if(!flag){
		move = 0;
		
		while (!flag && move < SIZE)
        {
        	char temp = array[move];
            if (isEmptyCell(array, move + 1))
            {
				array[move] = USER;
				flag = whoIsTheWinner(array) == USER;
				array[move] = temp;
            }

            if (!flag)
            {
                move++;
            }
        }
	}

	if (!flag)
    {
        move = 0;
        int i = 0;

        const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
        
        while (!flag && i < SIZE)
        {
            move = BEST_MOVES[i];
            if (isEmptyCell(array, move + 1))
            {
                flag = true;
            }
            ++i;
        }
    }
    
	return move;
}

void anounseTheWinner(char winner){
	if (winner == USER){
		cout << endl << "Human WIN";
	}
	else if (winner == COMPUTER){
		cout << endl << "Ha-ha-ha! I'm smarter than people! I'm going to destroy the World!";
	}
	else{
		cout << endl << "It's TIE";
	}
}

