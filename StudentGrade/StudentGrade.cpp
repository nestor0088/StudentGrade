#include <iostream>
#include "Student.h" 
using namespace std;

int main()
{
    string Name;
    double TotalGrade = 10;
    int g;

    cout << "Student Grade App" << endl;
    cout << "--------------------" << endl;
    cout << "Enter your Name --> ";
    getline(cin, Name);
    Student sg(Name);
    cout << "Enter your 10 grades" << endl;
    cout << "------------------------" << endl;

    for (int x = 1; x <= 10; x++)
    {
        cout << "Enter Grade #" << x << " --> ";
        cin >> g;
        sg.AddGrade(g);
    }
    cout << "Letter Grade: " << sg.getLetterGrade(g) << endl;
    cout << "Average Grade: " << sg.CalcAverage() << endl;
    return 0;
}
