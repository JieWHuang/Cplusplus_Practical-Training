#ifndef HEADER_BIGINT
#define	HEADER_BIGINT
#include <string>
#include <iostream>

class CBigInt
{
	std :: string values ; //��������λ�ϵ�����
	bool flag ; //true��ʾ������false��ʾ������0Ĭ��Ϊ����
public:
	explicit CBigInt() ; 
	CBigInt(const int i) ; 
	CBigInt(const std :: string& strValues) ;
	CBigInt(const CBigInt& bigInt) ; //�Զ��忽�����캯��
	~CBigInt() ;
	bool inline isPositive() {return flag ; };
	int compareBitInt(const CBigInt& rhs)const ; //�Ƚ��������Ĵ�С
	CBigInt& operator = (const CBigInt& rhs) ; //��ֵ����������
	friend std :: ostream& operator << (std :: ostream& ou, const CBigInt& bigInt) ; //�������������
	friend std :: istream& operator >> (std :: istream& in, CBigInt& bigInt) ; //���������������
	friend const CBigInt operator + (const CBigInt& lhs, const CBigInt& rhs ) ; //�ӷ���������
	friend const CBigInt operator - (const CBigInt& lhs, const CBigInt& rhs) ; //��������������
	friend const CBigInt operator * (const CBigInt& lhs, const CBigInt& rhs) ; //�˷�����������
	friend const CBigInt operator / (const CBigInt& lhs, const CBigInt& rhs) ; //������������
	friend const CBigInt operator % (const CBigInt& lhs, const CBigInt& rhs) ; //ȡģ�������������
	void setValue(const std :: string& strValues) ; //�����ַ���������ֵ
	const CBigInt absolute()const ; //����ֵ
};
#endif
