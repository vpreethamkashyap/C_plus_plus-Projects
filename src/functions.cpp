#include "../include/main.h"

//int greater_1(int a, int b);

calc::calc(){
	m_value = 0;
}

calc&  calc::add(int value){

	m_value = m_value + value;
	cout << m_value << '\n';
	return *this;
}

calc& calc::sub(int value){

	m_value = m_value - value;
	cout << m_value << '\n';
	return *this;
}

calc& calc::mult(int value){

	m_value = m_value * value;
	cout << m_value << '\n';
	return *this;
}

inline int calc::divide(int value){

	int div = m_value/value;
	return div;
}

int show(const calc& obj){

	cout << obj.m_value << endl;
	return 1;
}

int operator >(const calc& a, const calc& b){

	if(a.m_value > b.m_value)
	{
		return a.m_value;
	}
	else
	{
		return b.m_value;
	}
}

int greater_1(int a, int b){

	return ((a>b)? a : b);
}
