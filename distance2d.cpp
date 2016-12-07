//lab1_1
#include "distance2d.h"
#include <cmath>
#include <iostream>

using namespace std;

double distance2d(double x1, double y1, double x2, double y2)
    {
    	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

void printCircle(circle &circle1)
{
	cout << "(" << circle1.x << ";" << circle1.y << ")" << endl;
}
