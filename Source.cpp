#include <iostream>
#include <iomanip>
#include <string>
#include "Profile.h"
#include "Settings.h"
#include <vector>
#include <fstream>

using namespace std;

Settings Default;

int main_menu();
void generate_WO();
void generate_RO();
void profile_menu();
void JW531();

int round_off(double lift, double mod);

int main()
{
	int choice;

	do
	{
		choice = main_menu();

		if (choice == 1)
			generate_WO();
		else if (choice == 2)
			generate_RO();
		else if (choice == 3)
			profile_menu();
	} while (choice != 5);

	return 0;
}

int main_menu() //Menu function returns choice to main()
{
	int choice;

	cout << "-=Main Menu=-" << endl;
	cout << "1. Generate Work Out" << endl;
	cout << "2. Generate Routine" << endl;
	cout << "3. Profile" << endl;
	cout << "4. Settings" << endl;
	cout << "5. Quit" << endl;

	cout << endl << "Enter Choice (1-5)";
	cin >> choice;

	while (choice < 1 || choice > 5)
	{
		cout << "Please enter a valid choice 1-5";
		cin >> choice;
	}

	return choice;
}

void generate_WO()
{

}

void generate_RO()
{
	int choice;

	cout << "-=Generate Routine=-" << endl << endl;
	cout << "1. Jim Wendler 5-3-1" << endl << endl;
	cout << "Enter choice: ";
	cin >> choice;

	while (choice < 1 || choice > 1)
	{
		cout << "Please enter a valid choice 1-1";
		cin >> choice;
	}

	if (choice == 1)
		JW531();
}

void JW531()
{

}

int round_off(double lift, double mod) 
//We want all lifts to be divisible by 5. This function takes the max lift and applies the % modifier. We then divide this by 5
//and convert it to an integer to round off the end. Then multiply back by 5 to give us the final lift which is always divisible by 5
{
	float exact_lift;
	int rounded_lift;

	exact_lift = lift * mod;
	rounded_lift = round(exact_lift) / 5;
	rounded_lift *= 5;

	return rounded_lift;
}
