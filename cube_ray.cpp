<<<<<<< HEAD
#include <iostream>
#include <cstdlib>

#define ARRAY_SIZE 5

using namespace std;

void raySearch(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third);

int main()
{
	int cube[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE] = {0};
	int str_counter = 0;
	int left_counter = 0;
	int top_counter = 0;
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int x = 0; x < ARRAY_SIZE; x++){
			for (int y = 0; y < ARRAY_SIZE; y++){
				cube[i][x][y] = rand() % 2;
				cout << cube[i][x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	
	for (int x = 0; x < ARRAY_SIZE; x++){
		for (int y = 0; y < ARRAY_SIZE; y++){
			str_counter = 0;
			for (int i = 0; i < ARRAY_SIZE; i++){
				if (cube[i][x][y] == 0){
					str_counter++;
				}
				if (str_counter == ARRAY_SIZE){
					cout << "Straight ray is: " << endl << "X: " << x << " Y: " << y << endl << endl;
				}
			}
		}	
	}
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int x = 0; x < ARRAY_SIZE; x++){
			left_counter = 0;
			for (int y = 0; y < ARRAY_SIZE; y++){
				if(cube[i][x][y] == 0){
					left_counter++;
				}
				if (left_counter == ARRAY_SIZE){
					cout << "Left/Right ray is: " << endl << "I: " << i << " X: " << x << endl << endl;
				}
			}
		}
	}
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int y = 0; y < ARRAY_SIZE; y++){
			top_counter = 0;
			for (int x = 0; x < ARRAY_SIZE; x++){
				if (cube[i][x][y] == 0){
					top_counter++;
				}
				if (top_counter == ARRAY_SIZE){
					cout << "Top ray is: " << endl << "I: " << i << " Y: " << y << endl << endl;
				}
			}
		}
	}
	
	return 0;
}

//void raySearch(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third){
//	int counter = 0;
//	
//	for (first = 0; first < ARRAY_SIZE; first++){
//		for (second = 0; second < ARRAY_SIZE; second++){
//			counter = 0;
//			for (third = 0; third < ARRAY_SIZE; third++){
//				if (array[first][second][third] == 0){
//					counter++;
//				}
//				if (counter == ARRAY_SIZE){
//					cout << "Straight ray is: " << endl << "X: " << first << " Y: " << second << endl << endl;
//				}
//			}
//		}	
//	}
//}

=======
#include <iostream>
#include <cstdlib>

#define ARRAY_SIZE 5

using namespace std;

void raySearch(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third);

int main()
{
	int cube[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE] = {0};
	int str_counter = 0;
	int left_counter = 0;
	int top_counter = 0;
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int x = 0; x < ARRAY_SIZE; x++){
			for (int y = 0; y < ARRAY_SIZE; y++){
				cube[i][x][y] = rand() % 2;
				cout << cube[i][x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	
	for (int x = 0; x < ARRAY_SIZE; x++){
		for (int y = 0; y < ARRAY_SIZE; y++){
			str_counter = 0;
			for (int i = 0; i < ARRAY_SIZE; i++){
				if (cube[i][x][y] == 0){
					str_counter++;
				}
				if (str_counter == ARRAY_SIZE){
					cout << "Straight ray is: " << endl << "X: " << x << " Y: " << y << endl << endl;
				}
			}
		}	
	}
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int x = 0; x < ARRAY_SIZE; x++){
			left_counter = 0;
			for (int y = 0; y < ARRAY_SIZE; y++){
				if(cube[i][x][y] == 0){
					left_counter++;
				}
				if (left_counter == ARRAY_SIZE){
					cout << "Left/Right ray is: " << endl << "I: " << i << " X: " << x << endl << endl;
				}
			}
		}
	}
	
	for (int i = 0; i < ARRAY_SIZE; i++){
		for (int y = 0; y < ARRAY_SIZE; y++){
			top_counter = 0;
			for (int x = 0; x < ARRAY_SIZE; x++){
				if (cube[i][x][y] == 0){
					top_counter++;
				}
				if (top_counter == ARRAY_SIZE){
					cout << "Top ray is: " << endl << "I: " << i << " Y: " << y << endl << endl;
				}
			}
		}
	}
	
	return 0;
}

//void raySearch(int array[][ARRAY_SIZE][ARRAY_SIZE], int first, int second, int third){
//	int counter = 0;
//	
//	for (first = 0; first < ARRAY_SIZE; first++){
//		for (second = 0; second < ARRAY_SIZE; second++){
//			counter = 0;
//			for (third = 0; third < ARRAY_SIZE; third++){
//				if (array[first][second][third] == 0){
//					counter++;
//				}
//				if (counter == ARRAY_SIZE){
//					cout << "Straight ray is: " << endl << "X: " << first << " Y: " << second << endl << endl;
//				}
//			}
//		}	
//	}
//}

>>>>>>> a2a80843942ead84324caa00905fae466a7d2b01
