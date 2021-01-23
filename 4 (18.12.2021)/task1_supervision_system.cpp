#include <iostream>

#define N 10

using namespace std;

void invisiblePoints(int array[], int size);

int main()
{
	int array[N] = {1, 0, 1, 0, 1, 0, 1, 3, 3, 9};
	
	invisiblePoints(array, N);
	
	return 0;
}


void invisiblePoints(int array[], int size)
{
	int max = array[0];
	int counter = 0;
	int temp = 0;
	bool flag = false;
	
	cout << "Invisible points:\t";
	
	for (int i = 1; i < size; i++){
		if (array[i] > max){
			max = array[i];
		}
		else if (max == array[0] and array[i] <= max){
			if (counter == 0){
				temp = array[i];
				counter++;
			}
			else if (temp > array[i] and !flag){
				temp = array[i];
			}
			else if (temp < array[i]){
				temp = array[i];
				flag = true;
			}
			else {
				cout << array[i] << "\t";
			}
		}
		else{
			cout << array[i] << "\t";
		}
	}
}
