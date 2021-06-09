#include "task4.h"
#include <iostream>
using namespace std;

int main()
{
	
	auto test = trig();
	cout << "Test first funtion: " << endl;
	cin >> test;
	cout << test;

	cout << "Test trigonometric functions: " << endl;
	auto trg = trigonometry();
	cin >> trg;
	cout << trg;
	

	/*
	trigonometry trig_test = trigonometry();

	const trigonometry sin = trig_test.get_sin(6.0)
	std::cout << "sin= " <<  sin << "\n";

	*/

	return 0;
}