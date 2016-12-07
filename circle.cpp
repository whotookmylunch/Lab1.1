//Lab1_1
#include "circle.h"
#include <cmath>
#include "distance2d.h"

circle::circle()
{
	
}

circle::circle(double x, double y, double r)
   :x(x), y(y), r(r)
   {
   }
   

circle::circle(circle &circle1)
   :x(circle1.x), y(circle1.y), r(circle1.r)
   {
   }
   
   
bool circle::isValid()
{
	return (r > 0);
}


bool circle::isInsideOf(circle &circle1)
{	
    
    double dbldistance = distance2d(x, y, circle1.x, circle1.y);
    
    if(r > circle1.r)
    {
    	return (circle1.r + dbldistance) < r;
    }
    else 
    {
    	return ( r + dbldistance) < circle1.r;
    }
}



bool circle::haveCommonPoint (circle &circle1)
{
	if((circle1.r + r) > distance2d(x, y, circle1.x, circle1.y))
	{
		return false;
	}
	
	if (isInsideOf(circle1))
	{
		return true;
	}
	
	return true;
}


