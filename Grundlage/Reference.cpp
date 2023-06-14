#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 不要返回局部变量引用
int& test_1()
{
	int a = 10;
	return a;
}

// 函数的调用可以作为左值
int& test_2()
{
	static int a = 10; // 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
	return a;
}

int main()
{

	// 引用基本语法 数据类型 &别名 = 原名

	int a = 10;
	int& b = a;

	cout << a << endl;
	cout << b << endl;

	b = 100;

	cout << a << endl;
	cout << b << endl;

	// 1.引用必须初始化 2.引用在初始化后，不可以改变 

	// 引用做函数参数 可以简化指针修改实参
	int c = 10;
	int d = 20;
	swap(c, d);

	cout << c << endl;
	cout << d << endl;

	// 引用做函数的返回值
	int& ref = test_1();

	cout << ref << endl; // 局部变量调用函数后已释放，不可返回其引用

	// 函数的调用可以作为左值
	int& ref_2 = test_2();
	test_2() = 1000;
	cout << ref_2 << endl;

	// 引用的本质 

	system("pause");
	return 0;
}
