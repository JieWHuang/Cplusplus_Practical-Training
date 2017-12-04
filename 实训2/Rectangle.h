#ifndef HEADER_RECTANGLE
#define HEADER_RECTANGLE
#include"Shape.h"
class Rectangle:public Shape{
protected:
	Point a,b;
public:
	Rectangle(const Point& aa,const Point& bb);
	double area()const;
	void process()const;
};
#endif
