#ifndef ACCOUNTLIST
#define ACCOUNTLIST
#include"Account.h"
#include"ANode.h"
#include<string>
class AccountList{
	int size;
	ANode *first;
public:
	AccountList():first(0),size(0){}
	ANode* getFirst()const{ return first; }
	int getSize()const{ return size; }
	void add(Account* a);
//	void remove(const std::string& acntNo);
	Account* find(const std::string& acntNo)const;
	bool isEmpty()const{ return !size; }
	void display()const;
   ~AccountList();
};
#endif

