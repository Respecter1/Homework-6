/*
3. ���������� ���� Employee, ��� ������� ���
		- ����� ��������� � ����������� ������ ����� ������� ��� ������� � ������������ ��� �����-�����.
*/

#include <iostream>

class Employee
{

public:

	short GetAge() const { return age; }
	void SetAge(short newAge) { age = newAge; }

	short GetYearsOfService() const { return yearsOfService; }
	void SetYearsOfService(short newYersOfService) { yearsOfService = newYersOfService; }

	float GetSalary() const { return salary; }
	void SetSalary(float newSalary) { salary = newSalary; }

private:

	short age;
	short yearsOfService;//(���� ������)
	float salary;
};
//� ����� ��� ���� Employee �� ��� ������� ���� age, yearsOfService � salary, � ����� ������ ������ ������� ��� ������� � ������ ��� ����.




