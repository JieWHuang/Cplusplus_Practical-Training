#include"Fixed.h"
#include<time.h>
#include<string>
#include<iostream>
using namespace std;
Fixed::Fixed(string acntNo,double balan,int ti):Account(acntNo,balan),t(ti){  //构造函数 
	time_t t=time(0);            //执行构造函数时的时间 
	tm* area = localtime(&t);    //用time(0)调用系统时间，返回一个time_t类型的信息 
	year = area->tm_year+1900;   //为了提取年、月、日，需要将time_t转化成结构tm 
	month = area->tm_mon+1;      //转化用localtime(&t)调用 ，返回tm的指针，根据tm的分量名称进行访问，得到年月日。 
	day = area->tm_mday;
}
void Fixed::display()const{
	cout<<"定期账户: "<<acntNumber<<" = "<<balance<<"\n";
}
void Fixed::withdrawal(double amount){
	time_t t=time(0);                  //系统当前时间 
	tm* area = localtime(&t);
	int y2=area->tm_year+1900;
	int m2=area->tm_mon+1;
	int d2=area->tm_mday;
	int years=y2-year-((m2<month)||(m2==month && d2<day));   //与创建时的日期作比较 
	double I;
	switch(t){                         
		case 1: I=1.05; break;
		case 3: I=1.08; break;
		case 5: I=1.1;
	}
	cout<<acntNumber;
	if(years<t){                       //由于执行构造函数和执行取款的时间相差很少，所以I必定为1.01 
		cout<<" 提前取款时间: "<<year<<"-"<<month<<"-"<<day;
	    I=1.01; 
	}
	cout<<" 利息为 "<<I<<"。取款 "<<balance*I<<" 元成功, 现在你的定期账户余额剩余 0 元。\n";
	balance = 0;
}
