//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int miniPoints[] = { 0, 300, 350, 400, 450 };
	int maxPoints[] = { 299, 249, 399, 449, 500 };
	char letterGrade[] = { 'F', 'D', 'C', 'B', 'A' };
	int sub    = 0;    //keeps track of subscripts
	int points = 0;  
	int grade;

	//declare arrays and fill with data
	
	//get total points
	cout << "Enter points earned (negative number to stop program):" << endl;
	cin >> points;

	grade = maxPoints - miniPoints;

	cout << miniPoints << "You have a low score." << endl;

	cout << "Your score was " << grade << " and your letter grade was " << letterGrade << endl;

	cout << maxPoints << "Good Job You kid." << endl;
	
	system("pause");
	return 0;
}	//end of main function