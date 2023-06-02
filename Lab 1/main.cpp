#include <string>
#include <sstream>
#include <iostream>
#include "Receipt.h"

using namespace std;

int main() {
	int number = 0;
	int date = 300323;
	float sum = 1000.0;

	Receipt a[3];

	Receipt();

	Receipt receipt = Receipt(number, date, sum);

	Receipt secondHand = Receipt(receipt);

	cout << "Number: " << receipt.getNumber() << endl;
	cout << "Date: " << receipt.getDate() << endl;
	cout << "Sum: " << receipt.getSum() << endl;
	receipt.toString();
	return 0;
}
