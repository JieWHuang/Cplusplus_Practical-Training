#include"Credit.h"
#include<string>
#include<iostream>
using namespace std;
Credit::Credit(std::string acntNo,double balan,const std::string& pw):Savings(acntNo,balan),password(pw){}
void Credit::display()const{
	cout<<"���ÿ��˻�: "<<acntNumber<<" = "<<balance<<"\n";
}
void Credit::withdrawal(double amount){
	cout<<acntNumber<<" �������������:";
	std::string s;cin>>s;
	if(balance < amount || s!=password)
	  cout<<" ��Ч����������ʽ�����ȡ "<<amount<<" Ԫ��\n";
	else{
		balance -= amount;
	    std::cout<<"ȡ�� "<<amount<<" Ԫ�ɹ�,����������ÿ��˻����ʣ��"<<balance<<" Ԫ��\n";
	}
}
