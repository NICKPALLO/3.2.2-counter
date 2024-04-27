#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Counter
{
private:
	int value;
public:
	Counter()
	{
		this->value = 1;
	}
	Counter(int value)
	{
		this->value = value;
	}
	void increase()
	{
		value++;
	}
	void decrease()
	{
		value--;
	}
	int get_value()
	{
		return value;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Counter counter;
	string answer;
	int value;

	while (true)
	{
		cout << "�� ������ ������� ��������� �������� ��������?\n ������� �� ��� ���: ";
		cin >> answer;
		if (answer == "��")
		{
			cout << "������� ��������� �������� ��������: ";
			cin >> value;
			counter = Counter(value);
			break;
		}
		else if (answer == "���")
		{
			value = 1;
			break;
		}
		else
		{
			cout << "�������� �����!\n";
		}
	}
	while (true)
	{
		cout << "������� �������('+', '-', '=' ��� 'x') :";
		cin >> answer;
		if (answer == "+")
		{
			counter.increase();
		}
		else if (answer == "-")
		{
			counter.decrease();
		}
		else if (answer == "=")
		{
			cout << counter.get_value() << endl;
		}
		else if (answer == "�" || answer == "x")
		{
			break;
		}
	}
	cout << "�� ��������!";
	return 0;
}