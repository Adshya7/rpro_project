#include "math_helper.h"



math_helper::math_helper()
{
}

int math_helper::sum(int a, int b) {

	return a + b;

}

int math_helper::subtract(int a, int b) {

	return a - b;

}

double math_helper::multiply(int a, int b) {

	return a * b;

}

double math_helper::divide(int a, int b) {

	return a / b;
}

void math_helper::sort(int arr[], int size) {
	int temp; // saves value of current array entry

	for (int i = 0; i < size - 1; i++) {  // iterates through all the elements of the array
		for (int j = 0; j <size - i - 1; j++){ // for every iteration of i, the limit of the array decreases by 1
		temp = arr[j];

		if (arr[j] > arr[j + 1]) { //compares and swaps each element of the array 
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
		}
	}
}

math_helper::~math_helper()
{
}
