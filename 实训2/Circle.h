#ifndef HEADER_CIRCLE
#define HEADER_CIRCLE
#include"Shape.h"
class Circle:public Shape{
protected:
	Point a;
	double radius;
public:
	Circle(const Point& p,double r);
	double getRadius()const{ return radius; }
	double area()const;
	void process()const;
};
#endif
