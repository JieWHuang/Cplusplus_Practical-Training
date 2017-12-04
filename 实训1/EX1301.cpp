#include"Accountlist.h"
#include"Savings.h"
#include"Checking.h"
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream cin("Account.txt");
	AccountList v;
	int n;
	for(string s;cin>>s>>n && s!="x";)
	  if(s[0]=='s') v.add(new Savings(s,n));
	  else v.add(new Checking(s,n));
	v.display();
	return 0;
}
