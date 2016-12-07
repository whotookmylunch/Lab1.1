//lab1_1
#include <iostream>
#include <cmath>
#include "circle.h"
#include "distance2d.h"
#include <windows.h>

using namespace std;

void playCase(circle *circle2, circle *circle3)
{
	cout << "circle 2";
	printCircle(*circle2);
	cout << "circle 3";
	printCircle(*circle3);
	
	if (circle2->isInsideOf(*circle3))
	{
		cout << "the circle 2 is inside of the circle 3 or opposite" << endl;
	}
	else 
	{
		cout << "the circle 2 isn't inside of the circle 3 or opposite" << endl;
	}
	
	if (circle2->haveCommonPoint(*circle3))
	{
		cout << "the circle 2 have common point with circle 3" << endl;
	}
	else 
	{
		cout << "the circle 2 doesn't have commop point with circle 3" << endl;
	}
	}

int main(int argc, char *argv[]) {
	
	circle *circle2 = new circle(0, 6, 12);
	circle *circle3 = new circle(3, 5, 11);
	
	cout << "Case 1:" << endl;
    playCase(circle2, circle3);
	cout << endl;
	
	delete circle2;
	delete circle3;
	
	circle2 = new circle(1, 2, 10);
	circle3 = new circle(5, 9, 7);
	
	cout << "Case 2:" << endl;
	playCase(circle2, circle3);
	cout << endl;
	
	delete circle2;
	delete circle3;
	
	system("pause");
	
	return 0;
}
