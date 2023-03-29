// assignGradesCSC242.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//establish array
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE];
	int numStudents;
	int highScore = 0;
	//collect variables
	std::cout << "enter the number of students: ";
	std::cin >> numStudents;
	std::cout << "enter " << numStudents << " scores";

	for (int i = 0; i < numStudents; i++)
	{
		std::cin >> arr[i]; //reads each entry and adds it to array
	}

	//evaluates highest score
	int n = 0;
	int i = 0;
	for (int n = 0; n < numStudents; n++)
	{
		if (arr[n] > highScore) {
			highScore = arr[n];
		}
	}
		//loops through scores and assigns grades to each
		for (int i = 0; i < numStudents; i++)
		{
			if (arr[i] >= highScore - 10)
			{
				std::cout << "Student " << i << " scored " << arr[i] << " and grade is A " << std :: endl;
			}
			else if (arr[i] >= highScore - 20)
			{
				std::cout << "Student " << i << " scored " << arr[i] << " and grade is B " << std::endl;
			}
			else if (arr[i] >= highScore - 30)
			{
				std::cout << "Student " << i << " scored " << arr[i] << " and grade is C " << std::endl;
			}
			else if (arr[i] >= highScore - 40)
			{
				std::cout << "Student " << i << " scored " << arr[i] << " and grade is D " << std::endl;
			}
			else 
			{
				std::cout << "Student " << i << " scored " << arr[i] << " and grade is F " << std::endl;
			}
		}	
		return (0);
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
