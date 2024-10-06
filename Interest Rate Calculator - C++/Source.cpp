//Interest rate calculator written in C++

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

{
	//This program calculates the interest earned by a savings account

	//Declare constants for times compounded
	const int one = 1,
		hundred = 100;


	//Declare variables
	float principal,
		interest_rate,
		total_interest,
		end_year_amount;

	int interest_compounded;  //number of times interest is compounded

	//Gets principal, interest rate, and number of times compounded from user
	cout << endl;
	cout << "What is the principal account balance?" << endl;
	cin >> principal;

	cout << "What is the rate of interest?" << endl;
	cin >> interest_rate;

	cout << "How many times is interest compounded annually?" << endl;
	cin >> interest_compounded;

	//Values calculated
	interest_rate /= hundred; //3.75 == .0325
	// Amount = Principal * (1 + Rate/T)^T
	end_year_amount = principal * pow((one + interest_rate / interest_compounded), interest_compounded);
	total_interest = end_year_amount - principal;
	interest_rate *= hundred;

	//Program output
	cout << setprecision(2) << fixed << right << endl;

	cout << "Interest Rate:     " << setw(10);
	cout << interest_rate << '%' << endl;

	cout << "Times Compounded:    " << setw(10);
	cout << interest_compounded << endl;

	cout << "Principal Balance:       $" << setw(10);
	cout << principal << endl;

	cout << "Interest Earned:         $" << setw(10);
	cout << total_interest << endl;

	cout << "End Of Year Balance:     $" << setw(10);
	cout << end_year_amount << endl;

	//terminate program
	return 0;
}