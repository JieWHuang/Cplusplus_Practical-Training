#ifndef HEADER_ANODE
#define HEADER_ANODE
#include"Account.h"
class ANode{
public:
	Account* acnt;
	ANode *next,*prev;
	ANode(Account* a):acnt(a),next(0),prev(0){}
	bool operator==(const ANode& n)const{ return *acnt==*n.acnt; }
   ~ANode(){ delete acnt;}
};
#endif
