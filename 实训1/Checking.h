#ifndef HEADER_CHECKING
#define HEADER_CHECKING
#include"Account.h"
#include<string>
enum REMIT{remitByPost,remitByCable,other};              //ÐÅ»ã£¬µç»ã£¬ÎÞ 
class Checking:public Account{
	REMIT remittance;
public:
	Checking(std::string acntNo,double balan=0.0);
	void display()const;
	void withdrawal(double amount);
	void setRemit(REMIT re){ remittance=re;}
};
#endif
