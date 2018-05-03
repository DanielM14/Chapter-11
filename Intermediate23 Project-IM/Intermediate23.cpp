//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int points[5] = {62, 75, 100, 83, 85};
	char grades[5]  = {'D', 'C', 'A', 'B', 'B'};
	int x = 0;
	for (x = 0; x > 62; x = x + 1) 
	{
		int x = 0;
		cout << points[x] << "->" << grades[x] << endl;
		x = x + 1;
	}

	system("pause");
	return 0;
}	//end of main function