#include <iostream>
#include <locale>
#include "windows.h"
using namespace std;

class MAN // ������
{
public:
	float growth = 158.3;
	string hair_color = "brown";
	string name = "Nikol";
	string gender = "woman";
	int age = 18;
	string laugh;
	string massage;
	void Sits()
	{
		cout << name << " ������..." << endl;
	}
	void Drink(string liquid)
	{
		cout << name << " �'�..." << liquid << endl;
	}
	void Say(string nick)
	{
		cout << "���!" << nick << " ������ ����?" << endl;
	}
	void Laugh()
	{
		cout << laugh << endl;
	}
	void ToFeed()
	{
		cout << name << " ����... " << endl;
	}
};
class ROOM // ʲ�����
{

public:
	int count_room = 1;
	float height = 3; // m
	float width = 5; //m
	int count_angle = 4;
	string color_wall = "green";
	string room_closed;

	void TheRoomIsVentilated()
	{
		cout << "������ ������������..." << endl;
	}
	void TheRoomIsCleaned()
	{
		cout << "������� �����������..." << endl;
	}
	void TheRoomIsClosed(MAN who)
	{
		cout << "� �������� �����..." << endl;
		who.Sits();
	}
	void TheRoomIsOpen()
	{
		cout << "������ ��������..." << endl;
	}
	void TheRoomIsNotLit()
	{
		cout << "������ �� ����������..." << endl;
	}
};
class MOBILE_PHONE // ��������� �������
{
public:
	string colot_phone = "black";
	string brand = "iphone";
	bool case_phone = true;
	double prise = 27999; //$
	int count_contact = 52;
	string call;
	void PhoneCall()
	{
		cout << call << endl;
	}
	void Vibration()
	{
		cout << "�������..." << endl;
	}
	void TurnOnThePhone()
	{
		cout << "������� ���������..." << endl;
	}
	void WatchingVideo(MAN who)
	{
		cout << "�������� ����..." << endl;
		who.Laugh();
	}
	void Battery(string percent)
	{
		cout << "�� ��������: " << percent << " %" << endl;
	}
};
class MICROPHONE // ̲������
{
public:
	string color_micro = "black";
	bool buttom = true;//�������� ������ ��� �������� ����
	string brand = "Trust GXT";
	int frequency_range = 5000;
	float cord_length = 1.5;//m
	string position;
	string connection;
	void IncludeMiro()
	{
		cout << "������� ��������..." << endl;
	}
	void TurnOffMiro()
	{
		cout << "������� ��������..." << endl;
	}
	void Position()
	{
		cout << position << endl;
	}
	void Connection()
	{
		cout << connection << endl;
	}
	void NoConnection()
	{
		cout << "������� �� �������� �� �������..." << endl;
	}
};
class RACCOON // ����
{
public:
	string color_wool = "gray";
	float weight = 5.6; //kg
	string eyes_color = "green";
	string nick;
	string gender = "man";
	string noize;
	void Run(MAN who, string name, string nick)
	{
		cout << "���� ����� ��..." << name << "." << endl;
		who.Say(nick);
	}
	void MakeNoize()
	{
		cout << noize << endl;
	}
	void Walk()
	{
		cout << "���� ������..." << endl;
	}
	void Eat(MAN who, string meal)
	{
		who.ToFeed();
		cout << "���� ����..." << meal << endl;
	}
	void Jump(RACCOON who)
	{
		cout << "���� ������..." << endl;
		who.MakeNoize();
	}
};
int main()
{
	//setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MAN m;
	m.name = "�������";
	m.laugh = "��-��-��!";
	MOBILE_PHONE mb;
	RACCOON r;
	r.noize = "����!";
	r.nick = "������";
	ROOM room;
	room.room_closed = "������ ��������...";
	string meal;

	room.TheRoomIsClosed(m);
	mb.WatchingVideo(m);
	r.Run(m, m.name, r.nick);
	r.Jump(r);
	cout << "�� ���� ���� ����?" << endl;
	cin >> meal;
	r.Eat(m, meal);

}

