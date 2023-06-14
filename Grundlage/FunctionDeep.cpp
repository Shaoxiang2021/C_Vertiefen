#include<iostream>
using namespace std;

// 函数默认参数, 如果左边有了默认参数，则其右侧必须都为默认参数
int func(int a = 10, int b = 2, int c = 4)
{
	return a + b + c;
}

// 如果函数的声明有默认参数，函数实现就不能有默认参数
int func(int a = 10, int b = 10);

// 此处不能再次定义默认参数
int func(int a = 10, int b = 10)
{
	return a + b;
}

// 占位参数
int func(int a, int)
{
	cout << "func" << endl;
	return 0;
}

int main()
{
	system("pause");
	return 0;
}
