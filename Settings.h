#pragma once
#include <iostream>
#include <string>

class Settings
{
	float Max_Modifier;

public:

	Settings()
	{
		Max_Modifier = .90;
	}

	float get_modifier()
	{
		float mod = Max_Modifier;
		return mod;
	}
};