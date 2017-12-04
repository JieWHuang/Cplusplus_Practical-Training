#include"Checking.h"
#include<iostream>
Checking::Checking(std::string acntNo,double balan):Account(acntNo,balan),remittance(other){}
void Checking::display()const{
	std::cout<<"活期账户: "<<acntNumber<<" = "<<balance<<"\n"; 
}
void Checking::withdrawal(double amount){
	if(remittance==remitByPost)  //汇款 
	  amount += 30;
	if(remittance==remitByCable)
	  amount += 60;
	if(balance < amount)
	  std::cout<<acntNumber<<" 现有资金不足以取 "<<amount<<" 元。\n";
	else{
		balance -= amount;
	    std::cout<<acntNumber<<" 取款 "<<amount<<" 元成功, 现在你的活期账户余额剩余 "<<balance<<" 元。\n"; 
	} 
}
