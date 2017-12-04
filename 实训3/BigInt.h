#ifndef HEADER_BIGINT
#define	HEADER_BIGINT
#include <string>
#include <iostream>

class CBigInt
{
	std :: string values ; //保存所有位上的数字
	bool flag ; //true表示正数，false表示负数，0默认为正数
public:
	explicit CBigInt() ; 
	CBigInt(const int i) ; 
	CBigInt(const std :: string& strValues) ;
	CBigInt(const CBigInt& bigInt) ; //自定义拷贝构造函数
	~CBigInt() ;
	bool inline isPositive() {return flag ; };
	int compareBitInt(const CBigInt& rhs)const ; //比较两个数的大小
	CBigInt& operator = (const CBigInt& rhs) ; //赋值操作符重载
	friend std :: ostream& operator << (std :: ostream& ou, const CBigInt& bigInt) ; //重载输出操作符
	friend std :: istream& operator >> (std :: istream& in, CBigInt& bigInt) ; //输入操作符的重载
	friend const CBigInt operator + (const CBigInt& lhs, const CBigInt& rhs ) ; //加法操作重载
	friend const CBigInt operator - (const CBigInt& lhs, const CBigInt& rhs) ; //减法操作符重载
	friend const CBigInt operator * (const CBigInt& lhs, const CBigInt& rhs) ; //乘法操作符重载
	friend const CBigInt operator / (const CBigInt& lhs, const CBigInt& rhs) ; //除法操作重载
	friend const CBigInt operator % (const CBigInt& lhs, const CBigInt& rhs) ; //取模运算操作符重载
	void setValue(const std :: string& strValues) ; //根据字符串设置数值
	const CBigInt absolute()const ; //绝对值
};
#endif
