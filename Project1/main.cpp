/*
1. Напишіть програму, яка запитує число та показник ступеня. Напишіть рекурсивну функцію,
яка зводить число в ступінь шляхом багаторазового множення числа на себе, тобто.
якщо число дорівнює 2, а показник ступеня дорівнює 4, то ця функція має повернути число 16.

*/
#include <iostream>

short Pow(short number, short pow)
{
	return (pow <= 1) ? number : number * Pow(number, pow - 1);
}

int main()
{
	std::cout << "Enter your number: ";
	short number;
	std::cin >> number;

	std::cout << "Enter the power of the number: ";
	short pow;
	std::cin >> pow;

	std::cout << number << "^" << pow <<" = " << Pow(number, pow) << std::endl;

	return 0;
}
