#pragma once

class Receipt {
private:
	int number;
	int date;
	float sum;
public:
	Receipt();
	Receipt(const Receipt&);
	Receipt(int, int, float);
	~Receipt();
	int getNumber();
	int getDate();
	float getSum();
	void setNumber(int);
	void setData(int);
	void setSum(float);
	void toString();
};