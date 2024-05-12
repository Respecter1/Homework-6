/*
	9. ����: �� ��� ������� ������� ��������� � ����� ��� ?
*/
//³������ : 
//myTV.itsStation = 9; ` - ������ �� ���������� ����� "itsStation" ����� "TV" �� ���������, ����� ��������������� ����� - �����.
//TV.SetStation(10); - ������ ��������� ����� SetStation ����� ���� TV, ��� ����� ������� ��������� ����� ���������� ��'��� �����.
//TV myOtherTV(2); - ������ �������� ��'��� ����� TV � ���������� � �����������, ��� ���� �� �� ������������ � ����� ����������.


#include <iostream>

class TV
{
public:
    TV() : itsStation(0) {}  // ����������� �� �������������
    TV(int station) : itsStation(station) {}  // ����������� � ����������
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
    TV myTV;// ����������� �� �������������
    //myTV.itsStation = 9; 
    myTV.SetStation(10); // ������������ ���� �������� �������
    TV myOtherTV(2);// ����������� � ����������

    return 0;
}
