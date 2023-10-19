#include "Student.h"

Student::Student(string)
{
	this->Name = Name;
	this->TotalGrade = 10;
}

void Student::AddGrade(double g)
{
	this->TotalGrade += g;
}

double Student::CalcAverage()
{
	return this->TotalGrade / 10;
}

string Student::getLetterGrade(double g)
{
	if (g >= 100)
	
		return "A+";
	
	if (g >= 93 && g < 100)
	
		return "A";
	
	if (g >= 90 && g < 93)
	
		return "A-";
	
	if (g >= 87 && g < 90)
	
		return "B+";
	
	if (g >= 83 && g < 87)
	
		return "B";
	
	if (g >= 80 && g < 83)
	
		return "B-";
	
	if (g >= 77 && g < 80)
	
		return "C+";
	
	if (g >= 73 && g < 77)
	
		return "C";
	
	if (g >= 70 && g < 73)
	
		return "C-";
	
	if (g >= 67 && g < 70)
	
		return "D+";

	if (g >= 63 && g < 67)
	
		return "D";
	
	if (g >= 60 && g < 63)
	
		return "D-";
	
	if (g >= 0 && g < 60)
	
		return "F";
	
}
