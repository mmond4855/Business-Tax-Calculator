//Mario D. Mondelice
//Date Written - April 24, 2016
//This program will do calculations for a local business...

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void helloMessage();
void copyrightMario();
int functionOne(int num1);
int functionTwo(double num2, int num3);
void displayCompany(string title);
void displayPayRoll(string user, double number);
void highestPay(string user, double number);
void lowestPay(string user, double number);
void totalSale(double roll);
void payAverage(double roll);
void goodbyeMessage();


int main()
{
	char process;
	const int PAY_ROLL = 6;
	string businessName = " ";
	string name[PAY_ROLL] = { "Adam", "Billy", "Carl", "Logan", "Martin", "Tommy" };
	string highEmployee = " ";
	string lowEmployee = " ";
	int sales[PAY_ROLL] = { 0 };
	double highpayRoll = 0.0;
	double lowPayRoll = 0.0;
	double totalPay = 0.0;
	double averagePay = 0.0;

	helloMessage();
	copyrightMario();

	cout << endl << "Please enter any character to use this business calculator (entering Z ends the program)";
	cin >> process;
	process = toupper(process);

	system("color 05");

		do
		{

			for (int sale = 0; sale < PAY_ROLL; sale++)
			{
				cout << "Please enter " << name[sale] << "'s payroll :";
				cin >> sales[sale];

			}

			cout << "Please enter the name of your company: ";
			cout << businessName;

			for (int sale = 0; sale < PAY_ROLL; sale++)
			{
				totalPay = functionOne(sales[sale]);
			}

			highpayRoll = sales[0];

			for (int sale = 1; sale < PAY_ROLL; sale++)
			{
				if (sales[sale] > highpayRoll)
				{
					highpayRoll = sales[sale];
					highEmployee = name[sale];
				}
			}

			lowPayRoll = sales[0];

			for (int sale = 1; sale < PAY_ROLL; sale++)
			{
				if (sales[sale] < lowPayRoll)
				{
					lowPayRoll = sales[sale];
					lowEmployee = name[sale];
				}
			}

			averagePay = functionTwo(totalPay, PAY_ROLL);

			displayCompany(businessName);

			for (int sale = 0; sale < PAY_ROLL; sale++)
			{
				displayPayRoll(name[sale], sales[sale]);
			}

			highestPay(highEmployee, highpayRoll);
			lowestPay(lowEmployee, lowPayRoll);
			totalSale(totalPay);
			payAverage(averagePay);

			cout << endl << "Press any key to start all over (Z to end the program) ";
			cin >> process;

		} while (process != 'Z');

		goodbyeMessage();

	cout << endl << endl;
	return 0;
}

void helloMessage()
{
	cout << endl << "------------------------------------------";
	cout << endl;
	cout << endl << " Welcome to the Multi-Business Calculator ";
	cout << endl;
	cout << endl << "------------------------------------------";

	return;
}

void copyrightMario()
{
	cout << endl << "------------------------------------------";
	cout << endl;
	cout << endl << " Made by Mario D. Mondelice. @Apr 2016    ";
	cout << endl;
	cout << endl << "------------------------------------------";

	return;
}

int functionOne(int num1)
{
	int totalNum = 0;

	totalNum += num1;

	return totalNum;
}

int functionTwo(double num2, int num3)
{
	double avg = 0.0;

	avg = num2 / num3;

	return avg;
}

void displayCompany(string title)
{
	cout << "-------------------------------------------------------";
	cout << endl << "Here are the calculations for " << title << ". ";
	cout << endl;
	return;
}

void displayPayRoll(string user, double number)
{
	cout << endl << user << "'s pay roll for this month is: $" << number << ". ";
	return;
}

void highestPay(string user, double number)
{
	cout << endl << user << "has the highest amount of pay with: $" << number << ". ";
	return;
}

void lowestPay(string user, double number)
{
	cout << endl << user << "has the lowest amount of pay with: $" << number << ". ";
	return;
}

void totalSale(double roll)
{
	cout << endl << "The total of all of the payrolls is: $" << roll << ". ";
	return;
}
void payAverage(double roll)
{
	cout << endl << "The average payroll for your company is: $" << roll << ". ";
	return;
}
void goodbyeMessage()
{
	cout << endl << "**************************************************";
	cout << endl;
	cout << endl << "  Thank you for using this awesome calculator. ";
	cout << endl << "  Have a nice day! :D. Created 2016";
	cout << endl;
	cout << endl << "**************************************************";
	return;
}