#include"Savings.h"
#include<iostream>
#include<string>
Savings::Savings(std::string acntNo,double balan):Account(acntNo,balan){}
void Savings::display()const{
	std::cout<<"�����˻�: "<<acntNumber<<" = "<<balance<<"\n";
}
void Savings::withdrawal(double amount){
	if(balance < amount)
	  std::cout<<acntNumber<<" �����ʽ�����ȡ "<<amount<<" Ԫ��\n";
	else{
		balance -= amount;
	    std::cout<<acntNumber<<" ȡ�� "<<amount<<" Ԫ�ɹ�, ������Ĵ����˻����ʣ�� "<<balance<<" Ԫ��\n"; 
	}
}

