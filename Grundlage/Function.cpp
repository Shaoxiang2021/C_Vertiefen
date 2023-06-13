#include<iostream>
using namespace std;

// 关联头文件
#include "Function.h"

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

// 值传递
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	return;
}

// 函数常见样式

// 函数声明 提前告诉编译器函数的存在，可以利用函数的声明 函数可在main后面 --> 定义
int max(int a, int b);

/* 函数的份文件编写 
	1. 创建为.h的文件
	2. .cpp
	3. 头文件函数声明
	4. 在源文件中函数定义
*/ 

int main() {

	int a = 10;
	int b = 20;

	//当我们值传递时候，函数的形参发生改变，不会影响实参
	swap(a, b); // a 和 b 并没有交换 

	system("pause");
	return 0;
}

// 定义
int max(int a, int b)
{
	return a < b ? a : b;
}
