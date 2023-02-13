/*
Name: Brandon Johnson
Date: Feb 9, 2023
Project: 24 CW Basic
Submitted: Feb 7, 2023
Class: COSC 1337(02)

---------------------------------------------
Project Description
The program will ask to enter the contribution from a charity
70% of the charity goes to the owner
rest goes to the people

display the breakdown of the funds

*/
 
// Compiler directives
#include <iostream>             // for cin, cout, endl
#include <iomanip>				// formatting purpose
#include <cctype>				//
#include <cmath>				// handles math operations

using namespace std;

void boxOfficeEntry(string, int, int);
void header();
void footer();


int main()
{
	header();
	boxOfficeEntry("Da Haunting", 5, 5);
	footer(); 

	return 0;
}

void boxOfficeEntry(string movieName, int adultTix, int childTix)
{
	cout << "Box Office Entry" << endl;
	cout << "--------------------------" << endl;
	cout << "Enter Movie Name: " << endl;
	cin >> movieName;
	cout << "Adult Tickets Sold: " << endl;
	cin >> adultTix;
	cout << "Children Tickets Sold: " << endl;
	cin >> childTix;
	
	float adultCost = 6.00;
	float childCost = 3.00;
	float grossProfit;
	float paidDistributor;
	float netProfit;
	
	grossProfit = (adultTix * adultCost) + (childTix * childCost);
	netProfit = grossProfit * .20;
	paidDistributor = grossProfit - netProfit;

	
	cout << "--------------------------" << endl;
	cout << "Summary: Movie Revenue" << endl;
	cout << "--------------------------" << endl;
	cout << "Movie Name: " << movieName << endl;
	cout << "Gross Box Office Profit: $" << grossProfit << endl;
	cout << "Amount Paid to Distributor: $" << paidDistributor << endl;
	cout << "Net Box Office Profit: $" << netProfit << endl;
	
	
	
}


// This function will display the start of the project
void header()
{
	// Display results
	cout << "-----------------------------" << endl;
	cout << "Project 01: Box Office" << endl;
	cout << "Written By: Brandon Johnson"  << endl;
	cout << "Date: Feb 12, 2023" << endl;
	cout << "-----------------------------\n" << endl;
	
} // end of header()

// This function displays the end of the project
void footer()
{
	cout << "\n-----------------------------" << endl;
	cout << "End of Project 1 "  << endl;
	
}  // end of footer()


