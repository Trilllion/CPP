#include "stdafx.h"
#include "Merit.h"
#include <iostream>
#include <algorithm>
void student::Input()
{
	std::cin >> Physics[SNo];
	std::cin >> Chemistry[SNo];
	std::cin >> Maths[SNo];
}

void student::Show()
{
	std::cout << "P" << " " << "C" << " " << "M" << " " << "%" <<  std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << Physics[i] << " " << Chemistry[i] << " " << Maths[i] << " " << Percentage[i] << std::endl;
	}
	
}

float student::Getperc()
{
	float k = Physics[SNo] + Chemistry[SNo] + Maths[SNo];
	Percentage[SNo] = k / 3;
	return 0;
}

void student::Update()
{
	SNo++;
}

bool student::Valid()
{
	if (SNo > 2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

float student::Merit()
{
	float Numbah =  *std::min_element(Percentage, Percentage + 100);
	return Numbah;
}
