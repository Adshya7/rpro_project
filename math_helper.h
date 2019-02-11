#pragma once
#include <vector>
using namespace std;

class math_helper
{
private:

public:
	math_helper();
	int sum(int a, int b);
	int subtract(int a, int b);
	double multiply(int a, int b);
	double divide(int a, int b);


	void sort(int arr[], int size);

	~math_helper();
};

