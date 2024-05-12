//5. �� ����� �������� � ������ 3 ������� ����� ����� Employee, ���� ���������, ������ ����� ������ �������� ����������, ���������� ������� �� 10 ������.
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

	int getSalaryInThousands() const 
	{//���������� �������� �� ����� ��������� �� 500 � ����� �� 1000, � ���� ���������� �� ������ �����.
		return (salary + 500) / 10'000 * 10;
	}

private:

	short age;
	short yearsOfService;//(���� ������) 
	float salary;
};

int main()
{
	Employee Alex{};
	Alex.SetSalary(10'230); // ���������, 10'230(' ��� ������� �������) ������ �������� ����������
	std::cout << "Employee's salary in thousands: $" << Alex.getSalaryInThousands() << std::endl;

	return 0;
}