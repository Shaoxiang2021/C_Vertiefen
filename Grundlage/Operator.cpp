#include<iostream>
#include<string>
using namespace std;

int main()
{
	// 运算符 + - * / % ++ --
	// 前置后置递增和递减

	// ----前置后置区别----
	// 前置 先让变量+1 然后进行表达式运算
	int d1 = 10;
	int d2 = ++d1 * 10;
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;

	// 后置 反之
	int d3 = 10;
	int d4 = d3++ * 10;
	cout << "d3 = " << d3 << endl;
	cout << "d4 = " << d4 << endl;

	// 赋值运算符 = += -= *= /= %=

	// 比较运算符 == != > < >= <=

	// 逻辑运算符 ! && ||

	system("pause");
	return 0;
}
