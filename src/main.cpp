/*Author : V Preetham Kashyap
 * This file is first template of this project*/

#include "../include/main.h"

extern int show(const calc& obj);
extern int greater_1(int a, int b);

int main (void)
{
	calc cal;

	f_calc cal_2;

	cal.add(5).sub(3).mult(4);

	cout << cal_2.getvalue(cal)<< '\n';

	cout << cal.divide(2) << '\n';

	show(cal);

	cout << greater_1(10,20) << endl;

	return 0;
}

/*in-line a function for a C++ member function it acts like a static keyword behavior*/
inline int calc::divide(int value){

	int div = m_value/(value+2);
	return div;
}
