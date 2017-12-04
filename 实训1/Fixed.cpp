#include"Fixed.h"
#include<time.h>
#include<string>
#include<iostream>
using namespace std;
Fixed::Fixed(string acntNo,double balan,int ti):Account(acntNo,balan),t(ti){  //���캯�� 
	time_t t=time(0);            //ִ�й��캯��ʱ��ʱ�� 
	tm* area = localtime(&t);    //��time(0)����ϵͳʱ�䣬����һ��time_t���͵���Ϣ 
	year = area->tm_year+1900;   //Ϊ����ȡ�ꡢ�¡��գ���Ҫ��time_tת���ɽṹtm 
	month = area->tm_mon+1;      //ת����localtime(&t)���� ������tm��ָ�룬����tm�ķ������ƽ��з��ʣ��õ������ա� 
	day = area->tm_mday;
}
void Fixed::display()const{
	cout<<"�����˻�: "<<acntNumber<<" = "<<balance<<"\n";
}
void Fixed::withdrawal(double amount){
	time_t t=time(0);                  //ϵͳ��ǰʱ�� 
	tm* area = localtime(&t);
	int y2=area->tm_year+1900;
	int m2=area->tm_mon+1;
	int d2=area->tm_mday;
	int years=y2-year-((m2<month)||(m2==month && d2<day));   //�봴��ʱ���������Ƚ� 
	double I;
	switch(t){                         
		case 1: I=1.05; break;
		case 3: I=1.08; break;
		case 5: I=1.1;
	}
	cout<<acntNumber;
	if(years<t){                       //����ִ�й��캯����ִ��ȡ���ʱ�������٣�����I�ض�Ϊ1.01 
		cout<<" ��ǰȡ��ʱ��: "<<year<<"-"<<month<<"-"<<day;
	    I=1.01; 
	}
	cout<<" ��ϢΪ "<<I<<"��ȡ�� "<<balance*I<<" Ԫ�ɹ�, ������Ķ����˻����ʣ�� 0 Ԫ��\n";
	balance = 0;
}
