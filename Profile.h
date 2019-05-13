#pragma once
#include <iostream>
#include <string>

using namespace std;

class Profile
{
	string Name;
	double Bench_Press, Deadlift, Squat, OH_Press, BO_Row;
	int Age;
	double Bodyweight;
	char Sex;

public:

	Profile(string n, int age, char sex, double bw, double bp, double dl, double sq, double ohp, double bor)
	{
		Name = n;
		Age = age;
		Sex = sex;
		Bench_Press = bp;
		Deadlift = dl;
		Squat = sq;
		OH_Press = ohp;
		BO_Row = bor;
		
	}

	Profile(string n)
	{
		Name = n;
	}

	string display_name()
	{
		return Name;
	}


};
