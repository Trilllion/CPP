// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Merit.h"
#include <iostream>
student box;

int main()
{
	bool Valid = false; //sets if more students can enter marks
	do
	{
		box.Input();
		box.Getperc();
		box.Update();
		Valid = box.Valid();
	} while (Valid);

	std::cout << "Type 'Y' to see the results" << std::endl;
	std::string Y = "";
	std::cin >> Y;
	if (Y == "Y")
	{
		box.Show();
	}
	std::cout << box.Merit();
	system("pause");
}

