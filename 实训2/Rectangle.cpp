#include"Rectangle.h"
#include<iostream>
#include<cmath>
using namespace std;
Rectangle::Rectangle(const Point& aa,const Point& bb):a(aa),b(bb){}
double Rectangle::area()const{ return abs((a.x-b.x)*(a.y-b.y)); }
void Rectangle::process()const{
  cout<<"�����ε����Ϊ:"<<fixed<<area()<<"\n";
}
