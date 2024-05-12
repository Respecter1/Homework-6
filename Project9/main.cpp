/*
	9. Баги: які три помилки виявить компілятор у цьому коді ?
*/
//Відповідь : 
//myTV.itsStation = 9; ` - доступ до приватного члена "itsStation" класу "TV" це неможливо, треба використовувати метод - сетер.
//TV.SetStation(10); - спроба викликати метод SetStation через клас TV, але метод потрібно викликати через конкретний об'єкт класу.
//TV myOtherTV(2); - спроба створити об'єкт класу TV з аргументом у конструкторі, але клас не має конструктора з одним параметром.


#include <iostream>

class TV
{
public:
    TV() : itsStation(0) {}  // конструктор за замовчуванням
    TV(int station) : itsStation(station) {}  // конструктор з параметром
    ~TV() {}

    void SetStation(int station);
    int GetStation() const;
    
private:
    int itsStation;
};

void TV::SetStation(int Station)
{
    itsStation = Station;
}

int TV::GetStation() const
{
    return itsStation;
}

int main()
{
    TV myTV;// конструктор за замовчуванням
    //myTV.itsStation = 9; 
    myTV.SetStation(10); // встановлюємо нове значення станції
    TV myOtherTV(2);// конструктор з параметром

    return 0;
}
