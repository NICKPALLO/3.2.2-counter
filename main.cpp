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

	Counter* counter=nullptr;
	string answer;
	int value;

	while (true)
	{
		cout << "Вы хотите указать начальное значение счетчика?\n Введите да или нет: ";
		cin >> answer;
		if (answer == "да")
		{
			cout << "Введите начальное значение счетчика: ";
			cin >> value;
			counter = new Counter(value);
			break;
		}
		else if (answer == "нет")
		{
			counter = new Counter();
			break;
		}
		else
		{
			cout << "Неверный ответ!\n";
		}
	}
	while (true)
	{
		cout << "Введите команду('+', '-', '=' или 'x') :";
		cin >> answer;
		if (answer == "+")
		{
			counter->increase();
		}
		else if (answer == "-")
		{
			counter->decrease();
		}
		else if (answer == "=")
		{
			cout << counter->get_value() << endl;
		}
		else if (answer == "х" || answer == "x")
		{
			break;
		}
	}
	delete counter;
	cout << "До свидания!";
	return 0;
}