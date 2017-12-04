#include"Accountlist.h"
#include"Account.h"
#include<iostream>
#include<string>
void AccountList::add(Account* a){
	ANode* pN=new ANode(a);
	if(first){
		pN->next=first;
		first->prev=pN;
	}
	first=pN; size++;
}

Account* AccountList::find(const std::string& acntNo)const{
	for(ANode* p=first; p;p=p->next)
	  if(p->acnt->getAcntNo()==acntNo)
	    return p->acnt; 
	return 0;
}
void AccountList::display()const{
	std::cout<<"现在有 "<<size<<" 个账户.\n";
	for(ANode* p=first; p;p=p->next)
	  p->acnt->display(); 
}
AccountList::~AccountList(){
	for(ANode* p=first; p;p=first){
		first = first->next;
		delete p;
	}
}
