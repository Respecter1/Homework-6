//5. Ќа основ≥ програми з вправи 3 створ≥ть метод класу Employee, €кий пов≥домл€Ї, ск≥льки тис€ч долар≥в заробл€Ї службовець, округл€ючи в≥дпов≥дь до 10 долар≥в.
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
	{//ќкругл€Їмо зарплату до тис€ч зб≥льшуючи на 500 ≥ д≥л€чи на 1000, а пот≥м округлюЇмо до ц≥лого числа.
		return (salary + 500) / 10'000 * 10;
	}

private:

	short age;
	short yearsOfService;//(стаж роботи) 
	float salary;
};

int main()
{
	Employee Alex{};
	Alex.SetSalary(10'230); // Ќаприклад, 10'230(' дл€ кращого читанн€) долар≥в заробл€Ї службовець
	std::cout << "Employee's salary in thousands: $" << Alex.getSalaryInThousands() << std::endl;

	return 0;
}