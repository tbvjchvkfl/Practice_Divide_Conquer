#include<iostream>

int Factorial_R(int input);

int main()
{

	int n{ 0 };
	std::cin >> n;
	Factorial_R(n);
}

int Factorial_R(int input)
{
	if (input <= 0)
	{
		return 1;
	}

	return input * Factorial_R(input - 1);
}