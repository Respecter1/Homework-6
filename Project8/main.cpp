/*
    8. ����: �� ���� ������� ������ � ���������� ��������� ����� ?
*/

class Cat
{
public://������� "public:"�� �� ������ ������� �� ���� �������
    int GetAge() const;

private:
    int itsAge;
};

int Cat::GetAge() const // �� ��������� ����������� ����� ������
{
    return itsAge; 
}
