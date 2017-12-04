#include"Accountlist.h"
#include"Savings.h"
#include"Checking.h"
#include"Credit.h"
#include"Fixed.h"
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream cin("Account.txt");
	ifstream din("Withdrawal.txt");
	AccountList v;
	int n,m; string s,t;
	while(cin>>s>>n && s!="x")
		switch(s[1]){
			case'a':v.add(new Savings(s,n)); break;
			case'h':v.add(new Checking(s,n)); break;
			case'r':cin>>t; v.add(new Credit(s,n,t)); break;
			case'i':cin>>m; v.add(new Fixed(s,n,m)); 
		}
	v.display();
	cout<<"\n";
	while(din>>s>>n && s!="x"){
		Account* pa = v.find(s);
		if(pa) pa->withdrawal(n);
	}
	return 0;
}
