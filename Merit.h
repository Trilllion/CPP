#pragma once
#include <string>

class student {
public:
	std::string name = "";
	int Physics[4] = {};
	int Chemistry[4] = {};
	int Maths[4] = {};
	float Percentage[4] = {};
	void Input(); //input marks	
	void Show(); //display marks 
	float Getperc(); //calculate percentage
	void Update(); //update studentno
	bool Valid(); //
	float Merit();
private:
	int SNo = 1;

};