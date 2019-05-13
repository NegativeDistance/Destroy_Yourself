#include "Profile.h"
#include <vector>
#include <fstream>

void new_profile();

vector<Profile> Profiles;

void profile_menu() //Menu for Profile Options
{
	ifstream Profile_list;
	Profile_list.open("Profiles.txt");


	int choice;

	cout << "-=Profiles=-" << endl << endl;
	cout << "1. Create New Profile" << endl;
	cout << "2. Load Profile" << endl;
	cout << "3. Manage Profile" << endl;

	cout << endl << "Enter choice (1-3)";
	cin >> choice;

	while (choice < 1 || choice > 3)
	{
		"Please enter a valid choice 1-3";
		cin >> choice;
	}

	if (choice == 1)
		new_profile();
	/*else if (choice == 2)
		load_profile();
	else if (choice == 3)
		manage_profile();*/
}

void new_profile()
{
	string Name;
	double Bench_Press, Deadlift, Squat, OH_Press, BO_Row;
	int Age;
	double Bodyweight;
	char Sex;

	cout << "Name: ";
	cin >> Name;
	cout << "Age: ";
	cin >> Age;
	cout << "Gender: ";
	cin >> Sex;
	Sex = toupper(Sex);
	cout << "Current Bodyweight: ";
	cin >> Bodyweight;
	cout << "Please Enter Your CURRENT One Rep Max For The Following" << endl;
	cout << "Bench Press: ";
	cin >> Bench_Press;
	cout << "Deadlift: ";
	cin >> Deadlift;
	cout << "Squat: ";
	cin >> Squat;
	cout << "Overhead Press: ";
	cin >> OH_Press;
	cout << "Bent Over Row: ";
	cin >> BO_Row;

	Profile add(Name, Age, Sex, Bodyweight, Bench_Press, Deadlift, Squat, OH_Press, BO_Row);

	Profiles.push_back(add);
}