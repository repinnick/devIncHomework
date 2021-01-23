#include <iostream>
#include <cstdlib>

#define ARRAY_SIZE 5

using namespace std;

void printArray(int array[][ARRAY_SIZE][ARRAY_SIZE]);
bool isRayInCube(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third, char ray);

int main()
{
	int cube[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE] = {0};
	int x = 0, y = 0, i = 0;
	char ray;
	
	printArray(cube);
	
		
	if (isRayInCube(cube, i, y, x, 'T') or isRayInCube(cube, x, y, i, 'S') or isRayInCube(cube, i, x, y, 'R')){
		cout << endl << "Yes, we have pass ray!";
	}
	else {
		cout << "We don't have any pass rays.";
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

bool isRayInCube(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third, char ray){
	
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
						return true;
					}
				}
				else if (ray == 'T'){
					if (array[first][third][second] == 0){
						counter++;
					}
					if (counter == ARRAY_SIZE){
						return true;
					}
				}
				else if (ray == 'R'){
					if (array[first][second][third] == 0){
						counter++;
					}
					if (counter == ARRAY_SIZE){
						return true;
					}
				}
			}
		}	
	}
	
	return false;
}
