#include"Savings.h"
#include<iostream>
#include<string>
Savings::Savings(std::string acntNo,double balan):Account(acntNo,balan){}
void Savings::display()const{
	std::cout<<"储蓄账户: "<<acntNumber<<" = "<<balance<<"\n";
}
void Savings::withdrawal(double amount){
	if(balance < amount)
	  std::cout<<acntNumber<<" 现有资金不足以取 "<<amount<<" 元。\n";
	else{
		balance -= amount;
	    std::cout<<acntNumber<<" 取款 "<<amount<<" 元成功, 现在你的储蓄账户余额剩余 "<<balance<<" 元。\n"; 
	}
}

