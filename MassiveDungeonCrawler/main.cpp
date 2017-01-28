#include <iostream>
#include <time.h>
#include "master.h"

using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));
	cout << "Hello" << endl;

	//Unit mUnit = Unit(30, 20, 10, 15, 8);
	Rat mRat1 = Rat();
	Rat mRat2 = Rat(8, 8, 8, 8);
	Rat mRat3 = Rat(9, 9, 9, 9);


	return 0;
}