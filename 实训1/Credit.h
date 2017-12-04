#ifndef HEADER_CREDIT
#define HEADER_CREDIT
#include"Savings.h"
class Credit:public Savings{
	std::string password;
public:
	Credit(std::string acntNo,double balan,const std::string& pw);
	void display()const;
	void withdrawal(double amount);
};
#endif
