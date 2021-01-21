#include <iostream>
#include <cstdlib>

#define ARRAY_SIZE 5

using namespace std;

void printArray(int array[][ARRAY_SIZE][ARRAY_SIZE]);
void printStraightRay(int array[][ARRAY_SIZE][ARRAY_SIZE]);
void printTopRay(int array[][ARRAY_SIZE][ARRAY_SIZE]);
void printSideRay(int array[][ARRAY_SIZE][ARRAY_SIZE]);

int main()
{
	int cube[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE] = {0};
	
	printArray(cube);
	printStraightRay(cube);
	printTopRay(cube);
	printSideRay(cube);
	
	return 0;
}

void printArray(int array[][ARRAY_SIZE][ARRAY_SIZE])
{
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int x = 0; x < ARRAY_SIZE; x++){
			for (int y = 0; y < ARRAY_SIZE; y++){
				array[i][x][y] = rand() % 2;
				cout << array[i][x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}

void printStraightRay(int array[][ARRAY_SIZE][ARRAY_SIZE])
{
	int counter = 0;
	
	for (int x = 0; x < ARRAY_SIZE; x++){
		for (int y = 0; y < ARRAY_SIZE; y++){
			counter = 0;
			for (int i = 0; i < ARRAY_SIZE; i++){
				if (array[i][x][y] == 0){
					counter++;
				}
				if (counter == ARRAY_SIZE){
					cout << "Straight ray is: " << endl << "X: " << x << " Y: " << y << endl << endl;
				}
			}
		}	
	}
}

void printTopRay(int array[][ARRAY_SIZE][ARRAY_SIZE])
{
	int counter = 0;
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int y = 0; y < ARRAY_SIZE; y++){
			counter = 0;
			for (int x = 0; x < ARRAY_SIZE; x++){
				if (array[i][x][y] == 0){
					counter++;
				}
				if (counter == ARRAY_SIZE){
					cout << "Top ray is: " << endl << "I: " << i << " Y: " << y << endl << endl;
				}
			}
		}
	}
}

void printSideRay(int array[][ARRAY_SIZE][ARRAY_SIZE])
{
	int counter = 0;
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int x = 0; x < ARRAY_SIZE; x++){
			counter = 0;
			for (int y = 0; y < ARRAY_SIZE; y++){
				if(array[i][x][y] == 0){
					counter++;
				}
				if (counter == ARRAY_SIZE){
					cout << "Side ray is: " << endl << "I: " << i << " X: " << x << endl << endl;
				}
			}
		}
	}
}
