//lab1_1
#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
	private:
		double x, y, r;
		
	public:
		circle();
		circle(double x, double y, double r);
		circle(circle &circle1);
		bool isValid();
		bool isInsideOf(circle &circle1);
		bool haveCommonPoint(circle &circle1);
		friend void printCircle(circle &circle1);
};

#endif
