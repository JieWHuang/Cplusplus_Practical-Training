#include"Triangle.h"
#include<iostream>
#include<cmath>
using namespace std;
Triangle::Triangle(const Point& aa,const Point& bb,const Point& cc):a(aa),b(bb),c(cc){}
double Triangle::area()const{
  double xa=b.x-c.x,ya=b.y-c.y;
  double xb=a.x-c.x,yb=a.y-c.y;
  double xc=a.x-b.x,yc=a.y-b.y;
  xa*=xa; xb*=xb; xc*=xc;
  ya*=ya; yb*=yb; yc*=yc;                                  //海伦公式求三角形面积 
  double sa=sqrt(xa+ya),sb=sqrt(xb+yb),sc=sqrt(xc+yc);    //sa sb sc 三角形三条边的边长 
  double ss=(sa+sb+sc)/2;                                 //p=周长/2 
  return sqrt(ss*(ss-sa)*(ss-sb)*(ss-sc));                //S=sqrt(p(p-a)(p-b)(p-c))
}
void Triangle::process()const{
  cout<<"三角形的面积为:"<<fixed<<area()<<"\n";
}
