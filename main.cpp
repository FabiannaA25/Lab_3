#include <iostream>

int main()
{
	int pass = 0;
	double average;
	int sum = 0;
	int scores[10] = { 72, 81, 65, 90, 74, 66, 93, 98, 59, 23 };
	int highest = scores[0];
	int lowest = scores[0];

	for (int i = 0; i < 10; i++)
	{
		std::cout << scores[i] << std::endl;
		sum += scores[i]; 
		if (scores[i] >= 70)
		{
			std::cout << "Pass" << std::endl;
			pass++; 
		}
		else
		{
			std::cout << "Fail" << std::endl;
		}
		if (scores[i] > highest)
		{
			highest = scores[i];
		}
		if (scores[i] < lowest)
		{
			lowest = scores[i];
		}
	}
	average = sum / 10.0;
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Average: " << average << std::endl;
	std::cout << "Highest Score: " << highest << std::endl;
	std::cout << "Lowest Score: " << lowest << std::endl;
}
