#include"Circle.h"
#include<iostream>
using namespace std;
Circle::Circle(	const Point& p,double r):a(p),radius(r){}
double Circle::area()const{ return radius*radius*3.14; }
void Circle::process()const{
  cout<<"圆的面积为:"<<fixed<<area()<<"，半径为"<<fixed<<getRadius()<<"\n";
}
