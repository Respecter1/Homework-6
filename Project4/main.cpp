/*
4. Напишіть програму з використанням класу Employee, яка створює два об'єкти класу Employee;
встановлює дані-члени age, Years0fService та Salary, а потім виводить їх значення.
*/

#include <iostream>

class Employee
{
public:
	short GetAge() const { return age; }
	void SetAge(short newAge) { age = newAge; }

	short GetYersOfService() const { return yearsOfService; }
	void SetYersOfService(short newYersOfService) { yearsOfService = newYersOfService; }

	float GetSalary() const { return salary; }
	void SetSalary(float newSalary) { salary = newSalary; }

	void Show() const
	{
		std::cout << "Age:(" << GetAge() << ")\n";
		std::cout<< "YersOfService:(" << GetYersOfService() << ")\n";
		std::cout<< "Salary:(" << GetSalary() << ")\n\n";
	}
private:
	short age = 20;
	short yearsOfService = 1;//(стаж роботи)
	float salary = 30000.00f;
};


int main()
{
	Employee Alex;
	Alex.SetAge(22);
	Alex.SetYersOfService(3);
	Alex.SetSalary(80000.24f);
	Alex.Show();

	Employee Maksim;
	Maksim.SetAge(21);
	Maksim.SetYersOfService(2);
	Maksim.SetSalary(80200.23);
	Maksim.Show();

	return 0;
}
