#include<iostream>
using namespace std;
int main()
{
	int choice, val1, val2, moderesult;
	double num1, num2, result;
	cout << "___***< Welcome to the Calculator program >***___" << endl;
	do
	{
		cout << "\n Select an operator:" << endl;
		cout << "1.Addition (+)" << endl;
		cout << "2.Subtraction (-)" << endl;
		cout << "3.Multiplication (*)" << endl;
		cout << "4.Division (/)" << endl;
		cout << "5.Modulus (%)" << endl;
		cout << "6.Exit" << endl;
			cout << "Enter your choice: ";
		cin >> choice;
		if (choice == 6)
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
		case 5:
			val1 = int(num1);
			val2 = int(num2);
			if (num2 == 0)
			{
				cout << "Error : Division by zero is not allowed: " << endl;
			}
			else
			{
				moderesult = val1 % val2;
				cout << "Result = " << moderesult << endl;
			}
			break;
		default:
			cout << "invalid choice: " << endl;
		}
	} while (choice != 6);
	return 0;
}
