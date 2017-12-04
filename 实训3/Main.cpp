#include <iostream>
#include <fstream>
#include "BigInt.h"
#include <string>
using namespace std ;


int main(int argc, char** argv)
{
	ifstream cin("data.txt") ;
	string num1, num2 ;
	cin >> num1 >> num2 ;
	CBigInt bi1(num1);
	CBigInt bi2(num2) ;
	cout << "��һ���������ǣ�" << bi1 << endl ;
	cout << "�ڶ����������ǣ�" << bi2 << endl;
	cout << "�˷����: " << bi1 * bi2 << endl;
	cout << "�ӷ������" << (bi1 + bi2) << endl;
	cout << "���������" <<(bi1 - bi2) << endl;
	cout << "�����Ľ���ǣ�" << bi1/bi2 << endl;
	cout << "ȡģ�Ľ���ǣ�" << bi1 % bi2 << endl;
	return 0 ;
}
