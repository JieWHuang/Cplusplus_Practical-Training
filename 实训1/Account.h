#ifndef HEADER_ACCOUNT
#define HEADER_ACCOUNT
#include<string>
class Account{
protected:
	std::string acntNumber;
	double balance;
public:
	Account(std::string acntNo,double balan=0.0);
	virtual void display()const = 0;  //由于虚函数display根本没有被真正执行过，可将其清0，设计成抽象类 
	double getBalan()const{ return balance; }
	std::string getAcntNo()const { return acntNumber; }
	void deposit(double amount) { balance += amount; }
	bool operator==(const Account& a){ return acntNumber==a.acntNumber; }
	virtual void withdrawal(double amount){ return; }
	friend class ANode;                              //友类 
};
#endif
