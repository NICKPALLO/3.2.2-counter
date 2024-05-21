#pragma once

class Counter
{
private:
	int value;
public:
	Counter();
	Counter(int value);
	void increase();
	void decrease();
	int get_value();
};
