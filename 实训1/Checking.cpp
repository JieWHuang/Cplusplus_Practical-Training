#include"Checking.h"
#include<iostream>
Checking::Checking(std::string acntNo,double balan):Account(acntNo,balan),remittance(other){}
void Checking::display()const{
	std::cout<<"�����˻�: "<<acntNumber<<" = "<<balance<<"\n"; 
}
void Checking::withdrawal(double amount){
	if(remittance==remitByPost)  //��� 
	  amount += 30;
	if(remittance==remitByCable)
	  amount += 60;
	if(balance < amount)
	  std::cout<<acntNumber<<" �����ʽ�����ȡ "<<amount<<" Ԫ��\n";
	else{
		balance -= amount;
	    std::cout<<acntNumber<<" ȡ�� "<<amount<<" Ԫ�ɹ�, ������Ļ����˻����ʣ�� "<<balance<<" Ԫ��\n"; 
	} 
}
