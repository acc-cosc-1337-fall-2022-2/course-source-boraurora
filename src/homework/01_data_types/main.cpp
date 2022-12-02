//write include statements
#include<iostream>
#include "data_types.h"
//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	std::cout << "Input a number:" <<endl;
	std::cin >> num;
	int result;
	result = multiply_numbers(num);
	cout << result<<endl;
	int num1 = 4;
	result = multiply_numbers(num1);
	cout << result <<endl ;
	return 0;
}
