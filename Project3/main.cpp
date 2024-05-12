/*
3. Перепишіть клас Employee, щоб зробити дані
		- члени закритими і забезпечити відкриті методі доступу для читання і встановлення всіх даних-членів.
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
	short yearsOfService;//(стаж роботи)
	float salary;
};
//У цьому коді клас Employee має три приватні поля age, yearsOfService і salary, а також публічні методи доступу для читання і запису цих полів.




