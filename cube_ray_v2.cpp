#include <iostream>
#include <cstdlib>

#define ARRAY_SIZE 5

using namespace std;

void printArray(int array[][ARRAY_SIZE][ARRAY_SIZE]);
void printRaySearch(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third, char ray);

int main()
{
	int cube[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE] = {0};
	int x = 0, y = 0, i = 0;
	char ray;
	
	printArray(cube);
	
	while (true){
		cout << "For check TOP ray press 'T', SIDE ray - 'R', STRAIGHT ray - 'S'." << endl;
		cout << "Which side do you wnt to check? ";
		cin >> ray;
		cout << endl;
		
		if (ray == 'T'){
			printRaySearch(cube, i, y, x, ray);
		}
		else if (ray == 'S'){
			printRaySearch(cube, x, y, i, ray);
		}
		else if (ray == 'R'){
			printRaySearch(cube, i, x, y, ray);
		}
		else {
			cout << "Try again!";
		}
	}
	
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

void printRaySearch(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third, char ray){
	
	int counter = 0;
	
	for (first = 0; first < ARRAY_SIZE; first++){
		for (second = 0; second < ARRAY_SIZE; second++){
			counter = 0;
			for (third = 0; third < ARRAY_SIZE; third++){
				if (ray == 'S'){
					if (array[third][first][second] == 0){
						counter++;
					}
					if (counter == ARRAY_SIZE){
						cout << "Straight ray is: " << endl << "X: " << first << " Y: " << second << endl << endl;
					}
				}
				else if (ray == 'T'){
					if (array[first][third][second] == 0){
						counter++;
					}
					if (counter == ARRAY_SIZE){
						cout << "Top ray is: " << endl << "I: " << first << " Y: " << second << endl << endl;
					}
				}
				else if (ray == 'R'){
					if (array[first][second][third] == 0){
						counter++;
					}
					if (counter == ARRAY_SIZE){
						cout << "Side ray is: " << endl << "I: " << first << " X: " << second << endl << endl;
					}
				}
			}
		}	
	}
}
