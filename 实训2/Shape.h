#ifndef HEADER_SHAPE
#define HEADER_SHAPE
#include"Point.h"
class Shape{
public:
	virtual double area()const = 0;         //´¿Ðéº¯Êý 
	virtual void process()const = 0;        //´¿Ðéº¯Êý
};
#endif
