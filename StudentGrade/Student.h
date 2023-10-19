#pragma once
#include <string>
using namespace std;
class Student
{
private:
	string Name;
	double TotalGrade;
public:
	string getLetterGrade(double);
	Student(string);
	void AddGrade(double);
	double CalcAverage();
};