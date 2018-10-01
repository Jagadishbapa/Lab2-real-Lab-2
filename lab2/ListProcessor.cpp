// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	int size = cows.getSize();
	double sum = cows.getSum();
	cout << "cows list  :  " << cows << endl;
	cout << "cows size = " << size << endl;
	cout << "cows sum = " << sum << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	size = cows.getSize();
	sum = cows.getSum();
	cout << "cows size = " << size << endl;
	cout << "cows sum = " << sum << endl <<endl;

	List horses(cows);
	size = cows.getSize();
	sum = cows.getSum();
	cout << "cows list  :  " << cows << endl;
	cout << "cows size = " << size << endl;
	cout << "cows sum = " << sum << endl;

	int horseSize = horses.getSize();
	double horseSum = horses.getSum();
	cout << "horses list:  " << horses << endl;
	cout << "horses Size:  " << horseSize << endl;
	cout << "horses Sum:   " << horseSum << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	size = cows.getSize();
	sum = cows.getSum();
	cout << "cows size = " << size << endl;
	cout << "cows sum = " << sum << endl;
	cout << "horses list:  " << horses << endl;
	horseSize = horses.getSize();
	horseSum = horses.getSum();
	cout << "horses Size:  " << horseSize << endl;
	cout << "horses Sum:   " << horseSum << endl << endl;
	List pigs;
	cout << "cows list  :  " << cows << endl;
	size = cows.getSize();
	sum = cows.getSum();
	cout << "cows size = " << size << endl;
	cout << "cows sum = " << sum << endl;

	cout << "horses list:  " << horses << endl;
	horseSize = horses.getSize();
	horseSum = horses.getSum();
	cout << "horses Size:  " << horseSize << endl;
	cout << "horses Sum:   " << horseSum << endl;

	cout << "pigs list  :  " << pigs << endl << endl;
	int pigSize = pigs.getSize();
	double pigSum = pigs.getSum();
	cout << "Pig size:  " << pigSize << endl;
	cout << "Pig sum:   " << pigSum << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	size = cows.getSize();
	sum = cows.getSum();
	cout << "cows size = " << size << endl;
	cout << "cows sum = " << sum << endl;

	cout << "horses list:  " << horses << endl;
	horseSize = horses.getSize();
	horseSum = horses.getSum();
	cout << "horses Size:  " << horseSize << endl;
	cout << "horses Sum:   " << horseSum << endl;

	cout << "pigs list  :  " << pigs << endl;
	pigSize = pigs.getSize();
	pigSum = pigs.getSum();
	cout << "Pig size:  " << pigSize << endl;
	cout << "Pig sum:   " << pigSum << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	size = cows.getSize();
	sum = cows.getSum();
	cout << "cows size = " << size << endl;
	cout << "cows sum = " << sum << endl;

	cout << "horses list:  " << horses << endl;
	horseSize = horses.getSize();
	horseSum = horses.getSum();
	cout << "horses Size:  " << horseSize << endl;
	cout << "horses Sum:   " << horseSum << endl;
	pigs.insertAsLast(2.22);
	pigSize = pigs.getSize();
	pigSum = pigs.getSum();
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "Pig size:  " << pigSize << endl;
	cout << "Pig sum:   " << pigSum << endl<< endl;
	cout << "End of code" << endl;
	
	pigs.insertAsLast(3.33);
	cout << "pigs list  :  " << pigs << endl << endl;
	pigSize = pigs.getSize();
	pigSum = pigs.getSum();
	cout << "Pig size:  " << pigSize << endl;
	cout << "Pig sum:   " << pigSum << endl << endl;
	List zebra;
	zebra.insertAsLast(1);
	int zebrasize = zebra.getSize();
	double zebrasum = zebra.getSum();
	cout << "zebra list: " << zebra << endl;

	system("pause");
	return 0;
}

