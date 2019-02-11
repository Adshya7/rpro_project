#include <iostream>
#include "math_helper.h"

int main() {
	int choice;
	int a;
	int b;
	int size;

	math_helper num;
	cout << "Choose a function:" << endl;
	cout << " 1. Sum \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Sort \n\n 0. Exit" << endl;
	cin >> choice;
	while (choice != 0) {
		if (choice == 1) {
			cout << "Enter 2 numbers" << endl;
			cin >> a;
			cin >> b;
			cout << "The summation of " << a << " and " << b << " is equal to " << num.sum(a, b) << endl;
		}
		else if (choice == 2) {
			cout << "Enter 2 numbers" << endl;
			cin >> a;
			cin >> b;
			cout << "The subtraction of " << b << " from " << a << " is equal to " << num.subtract(a, b) << endl;
		}

		else if (choice == 3) {
			cout << "Enter 2 numbers" << endl;
			cin >> a;
			cin >> b;
			cout << "The multiplication of " << a << " and " << b << " is equal to " << num.multiply(a, b) << endl;
		}

		else if (choice == 4) {
			cout << "Enter 2 numbers" << endl;
			cin >> a;
			cin >> b;
			cout << "The division of " << a << " by " << b << " is equal to " << num.divide(a, b) << endl;
		}

		else if (choice == 5) {
			cout << "Enter how many numbers you wish to sort" << endl;
			cin >> size;
			cout << "Enter " << size << " numbers" << endl;
			int* arr = new int[size];
			for (int i = 0; i < size; i++)
				cin >> arr[i];
			num.sort(arr, size);
			cout << "The numbers entered is sorted as following" << endl;
			for (int i = 0; i < size; i++)
				cout << arr[i] << endl;
		}

		cin >> choice;
	}

	return 0;
}