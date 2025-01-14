#include<iostream>
using namespace std;
int main()
{
	int choice;
	double num1, num2, result;
	cout << "___***< Welcome to the Calculator program >***___" << endl;
	do
	{
		cout << "\n Select an operator:" << endl;
		cout << "1.Addition(+)" << endl;
		cout << "2.Subtraction(-)" << endl;
		cout << "3.Multiplication(*)" << endl;
		cout << "4.Division(/)" << endl;
		cout << "5.Exit:" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice == 5)
		{
			cout << "Exiting the program : GoodBay!" << endl;
			break;
		}
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		switch (choice)
		{
		case 1:
			result = num1 + num2;
			cout << "Result = " << result << endl;
			break;
		case 2:
			result = num1 - num2;
			cout << "Result = " << result << endl;
			break;
		case 3:
			result = num1 * num2;
			cout << "Result = " << result << endl;
			break;
		case 4:
				if (num2 == 0)
				{
					cout << "Error : Division by zero is not allowed: " << endl;
				}
				else
				{
					result = num1 / num2;
					cout << "Result: " << result << endl;
				}
			break;
			default:
				cout << "invalid choice: " << endl;
		}
	}
	while (choice != 5);
	return 0;
}