#ifndef HEADER_SHAPE
#define HEADER_SHAPE
#include"Point.h"
class Shape{
public:
	virtual double area()const = 0;         //���麯�� 
	virtual void process()const = 0;        //���麯��
};
#endif
