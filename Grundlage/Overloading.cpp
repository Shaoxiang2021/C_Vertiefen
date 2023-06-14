#include<iostream>
using namespace std;

// 函数重载满足条件 1.同一个作用域下 2.函数名称相同 3.函数参数类型不同或者个数不同或者顺序不同 函数返回值不可成为函数重载的条件

void func()
{
	cout << "func" << endl;
}

// 3.
void func(int a)
{
	cout << "func" << endl;
}

void func(double a, int b)
{
	cout << "func" << endl;
}

// 引用作为重载条件
void func_(int& a)
{
	cout << "func" << endl;
}

void func_(const int& a)
{
	cout << "func with const" << endl;
}

// 函数重载碰到默认参数 尽量不要默认参数
void _func_(int a, int b = 10)
{
	cout << "func" << endl;
}

void _func_(int a)
{
	cout << "func" << endl;
}

int main()
{
	int a = 10;
	func_(a); // 加载第一个func_

	func_(10); // const int &a = 10 合法的代码 int &a = 10 不合法

	// _func_(10); 出错

	system("pause");
	return 0;
}

