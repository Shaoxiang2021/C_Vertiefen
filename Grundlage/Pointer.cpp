#include<iostream>
using namespace std;

// 值传递
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 地址传递
void swap_(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void _swap_(int* a, int* b)
{
	int* p = a;
	a = b;
	b = p;
}

// 此为正确
void _swap__(int** a, int** b)
{
	int* p = *a;
	*a = *b;
	*b = p;
}

/*
The function _swap_ you provided attempts to swap the values of two integer pointers a and b, 
but it does not actually swap the addresses they point to. The reason for this is that pointer 
values are passed by value in C, meaning that changes made to the pointers within the function 
do not affect the original pointers in the calling code.
*/

int main() {

	// 1. 定义一个指针
	int a = 10;

	int* p;

	p = &a; // 取址符号&

	cout << "地址: " << &a << endl;
	cout << "指针: " << p << endl;

	// 2. 如何使用指针

	// 可以通过解引用的方式来找到指针指向的内存，指针前加*代表解引用，找到指针向的内存中的数据
	*p = 100;
	cout << a << endl;
	cout << *p << endl;

	// 32位操作系统下，指针是占4个字节大小，64位则8字节大小

	// 空指针 指针变量指向内存中编号为0的空间 初始化指针变量，空指针指向的内存是不可访问的
	// int* p = NULL;
	// *p = 100; 这里出错，不可访问

	// 野指针 指向非法空间的指针
	// int* p = (int*)0x1100; //强制转换为指针 没有权利访问该地址 在程序中避免出现野指针 "读取访问权限冲突"

	// const修饰指针 
	/* 常量指针 指针的指向可以更改，但是指针指向的值不可以更改
	  const int* p = &a;
	  *p = 20; 错误 不可更改值
	   p = &b; 正确 可以修改指针指向
	*/

	/* 指针常量 指针的指向不可更改，但是指针指向的值可以更改
	  int* const p = &a;
	  *p = 20; 正确，指向的值可以更改
	   p = &b; 错误，指针指向不可更改
	 */

	/* const int* const p = &a; 都不可修改
	*/

	// 指针和数组
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << arr[0] << endl;
	int* p_arr = arr;
	cout << *p_arr << endl;

	p++; //让指针向后偏移了四个字节 int型
	cout << *p << endl;

	// 指针和函数 地址传递
	int c = 10;
	int d = 20;
	swap_(&c, &d);

	cout << c << d << endl;

	int f = 20;
	int e = 30;

	cout << &f << endl;
	cout << &e << endl;

	_swap_(&f, &e);

	cout << &f << endl;
	cout << &e << endl;

	system("pause");
	return 0;
}
