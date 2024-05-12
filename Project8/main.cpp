/*
    8. Баги: що дуже корисне відсутнє у наступному оголошенні класу ?
*/

class Cat
{
public://добавив "public:"бо не булоби доступу до цієї функції
    int GetAge() const;

private:
    int itsAge;
};

int Cat::GetAge() const // не висточала ініціалізації цього методу
{
    return itsAge; 
}
