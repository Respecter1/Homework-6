/*
6. Змініть клас Employee так, щоб можна було ініціалізувати дані-члени age, YearsofService і Salary у процесі "створення" службовця.
*/

#include <iostream>

class Employee
{
public:

    Employee(short newAge, short newYearsOfService, float newSalary) 
        : age(newAge), yearsOfService(newYearsOfService), salary(newSalary) 
    { Show(); }

    ~Employee(){}
    short GetAge() const { return age; }
    void SetAge(short newAge) { age = newAge; }

    short GetYersOfService() const { return yearsOfService; }
    void SetYearsOfService(short newYearsOfService) { yearsOfService = newYearsOfService; }

    float GetSalary() const { return salary; }
    void SetSalary(float newSalary) { salary = newSalary; }
    
    void Show() const
    {
        std::cout << "Age: " << age << " years old\n";
        std::cout << "Years Of service: " << yearsOfService << " years old\n";
        std::cout << "Salary: $" << salary << "\n\n";
    }
private:
    short age;
    short yearsOfService;
    float salary;
};

int main()
{
    Employee Alex{ 21,2,20000 };

    return 0;
}

