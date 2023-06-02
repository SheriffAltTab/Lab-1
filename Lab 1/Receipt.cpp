#include "Receipt.h"
#include <iostream>
using namespace std;

Receipt::Receipt()
{
	cout << "The constructor without parameters worked" << endl;
}

Receipt::Receipt(const Receipt& jojoref)
{
	this->number = jojoref.number;
	this->date = jojoref.date;
	this->sum = jojoref.sum;
	cout << "The constructor D4C worked, the object was copied" << endl;
}

Receipt::Receipt(int number, int date, float sum) {
	this->number = number;
	this->date = date;
	this->sum = sum;
	cout << "The constructor with parameters worked, the object was created" << endl;
}

Receipt::~Receipt()
{
	cout << "The destructor worked" << endl;
}


int Receipt::getNumber() {
	return number;
}

int Receipt::getDate()
{
	return this->date;
}

float Receipt::getSum()
{
	return this->sum;
}

void Receipt::setNumber(int num)
{
	this->number = num;
}

void Receipt::setData(int date)
{
	this->date = date;
}

void Receipt::setSum(float sum)
{
	this->sum = sum;
}

void Receipt::toString()
{
	cout << "Number:" << number << " Date:" << date << " Sum:" << sum << endl;
}