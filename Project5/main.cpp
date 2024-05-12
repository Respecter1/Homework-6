//5. На основі програми з вправи 3 створіть метод класу Employee, який повідомляє, скільки тисяч доларів заробляє службовець, округляючи відповідь до 10 доларів.
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
	{//Округляємо зарплату до тисяч збільшуючи на 500 і ділячи на 1000, а потім округлюємо до цілого числа.
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
	Alex.SetSalary(10'230); // Наприклад, 10'230(' для кращого читання) доларів заробляє службовець
	std::cout << "Employee's salary in thousands: $" << Alex.getSalaryInThousands() << std::endl;

	return 0;
}
