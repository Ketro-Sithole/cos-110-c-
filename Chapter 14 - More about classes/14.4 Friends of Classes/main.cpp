//This program demonstrates a static member function.
#include <iostream>
#include <iomanip>
#include "Budget.h"

using namespace std;

int main(int argc, char const *argv[])
{
	double mainOfficeRequest;				//Main office budget request
	const int NUM_DIVISIONS = 4;			//Number of divisions
	
	//Get the main office's budget request. Note that no instsnces of the class have been defined.
	cout << "Enter the main office's budget request: ";
	cin >> mainOfficeRequest;
	Budget::mainOffice(mainOfficeRequest);

	Budget divisions[NUM_DIVISIONS];		//Array of Budget objects
	AuxiliaryOffice auxOffices[4];			//Array of AuxiliaryOffice

	//Get the budget requests for each division.
	for (int count=0;	count<NUM_DIVISIONS;	count++)
	{
		double budgetAmount;					//To hold input.

		//Get the request for the division office.
		cout << "Enter the budget request for division " << count+1 << ": ";
		cin >> budgetAmount;
		divisions[count].addBudget(budgetAmount);

		//Get the division for the auxiliary office.
		cout << "Enter the budget request for that division's auxiliary office: ";
		cin >> budgetAmount;
		auxOffices[count].addBudget(budgetAmount, divisions[count]);
	}

	//Display the budget requests and the corporate budget.
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the division budget requests: \n";

	for (int count=0;	count<NUM_DIVISIONS;	count++)
	{
		cout << "\tDivision " << count+1 << "\t\tR ";
		cout << divisions[count].getDivisionBudget() << endl;
		cout << "\tAuxiliary office: \tR";
		cout << auxOffices[count].getDivisionBudget() << endl << endl;
	}

	cout << "\tTotal Budget Requests: \tR ";
	cout << divisions[0].getCorpBudget() << endl;

	return 0;
}
