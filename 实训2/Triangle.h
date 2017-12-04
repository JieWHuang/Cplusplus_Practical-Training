#ifndef HEADER_TRIANGLE
#define HEADER_TRIANGLE
#include"Shape.h"
class Triangle:public Shape{
protected:
	Point a,b,c;
public:
	Triangle(const Point& aa,const Point& bb,const Point& cc);
	double area()const;
	void process()const;
};
#endif
