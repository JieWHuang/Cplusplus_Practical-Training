#ifndef HEADER_FIXED
#define HEADER_FIXED
#include"Account.h"
#include<string>
class Fixed:public Account{
	using Account::deposit;   //���ڶ����˻��������м�ȡ�����⣬���������deposit������������Account���deposit�����ķ���Ȩ�޸�Ϊ˽�е� 
protected:
	int year,month,day;
	int t;
public:
	Fixed(std::string acntNo,double balan=0.0,int t=1);
	virtual void display()const;
	virtual void withdrawal(double amount);
};
#endif
