#include"Credit.h"
#include<string>
#include<iostream>
using namespace std;
Credit::Credit(std::string acntNo,double balan,const std::string& pw):Savings(acntNo,balan),password(pw){}
void Credit::display()const{
	cout<<"信用卡账户: "<<acntNumber<<" = "<<balance<<"\n";
}
void Credit::withdrawal(double amount){
	cout<<acntNumber<<" 请输入你的密码:";
	std::string s;cin>>s;
	if(balance < amount || s!=password)
	  cout<<" 无效密码或现有资金不足以取 "<<amount<<" 元。\n";
	else{
		balance -= amount;
	    std::cout<<"取款 "<<amount<<" 元成功,现在你的信用卡账户余额剩余"<<balance<<" 元。\n";
	}
}
