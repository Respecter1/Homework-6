/*
1. �������� ��������, ��� ������ ����� �� �������� �������. �������� ���������� �������,
��� ������� ����� � ������ ������ �������������� �������� ����� �� ����, �����.
���� ����� ������� 2, � �������� ������� ������� 4, �� �� ������� �� ��������� ����� 16.

*/
#include <iostream>

short Pow(short number, short pow)
{
	return(pow == 0) ? 1 : number * Pow(number, pow - 1);

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