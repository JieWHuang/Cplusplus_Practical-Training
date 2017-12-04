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
  ya*=ya; yb*=yb; yc*=yc;                                  //���׹�ʽ����������� 
  double sa=sqrt(xa+ya),sb=sqrt(xb+yb),sc=sqrt(xc+yc);    //sa sb sc �����������ߵı߳� 
  double ss=(sa+sb+sc)/2;                                 //p=�ܳ�/2 
  return sqrt(ss*(ss-sa)*(ss-sb)*(ss-sc));                //S=sqrt(p(p-a)(p-b)(p-c))
}
void Triangle::process()const{
  cout<<"�����ε����Ϊ:"<<fixed<<area()<<"\n";
}
