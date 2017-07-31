#include <iostream>

using namespace std;

class calc {

private:
	int m_value;

public:
	calc();

	calc& add(int );
	calc& sub(int );
	calc& mult(int );

	int getvalue()
	{
		return m_value;
	}

	inline int divide(int);

	friend class f_calc;
	friend int show(const calc& );
	friend int operator >(const calc& a, const calc& b);
};

class f_calc{

public:
	int getvalue(const calc& calc_obj)
	{
		return calc_obj.m_value;
	}
};
