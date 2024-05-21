#include "Counter.h"

Counter::Counter()
{
	this->value = 1;
}
Counter::Counter(int value)
{
	this->value = value;
}
void Counter::increase()
{
	value++;
}
void Counter::decrease()
{
	value--;
}
int Counter::get_value()
{
	return value;
}