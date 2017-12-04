#ifndef HEADER_FIXED
#define HEADER_FIXED
#include"Account.h"
#include<string>
class Fixed:public Account{
	using Account::deposit;   //由于定期账户不存在中间取款问题，不允许调用deposit操作，将基类Account类的deposit操作的访问权限改为私有的 
protected:
	int year,month,day;
	int t;
public:
	Fixed(std::string acntNo,double balan=0.0,int t=1);
	virtual void display()const;
	virtual void withdrawal(double amount);
};
#endif
