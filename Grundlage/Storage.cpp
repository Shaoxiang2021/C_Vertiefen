/*
内存分区模型
1.代码区
2.全局区
3.栈区
4.堆区

运行程序前，生成了exe可执行程序，未执行该程序前分为两个区域
代码区 存放CPU执行的机器指令

全局区 全局和静态变量存放在此，该区域的数据在程序结束后由操作系统释放
全局变量在main函数外面，在里面的为局部变量
全局变量 —— 静态变量 static，字符串常量，const修饰的全局变量

程序运行后
栈区 由编译器自动分配释放
不要返回局部变量的地址 e.g. return &a, 栈区的数据在函数执行完成后自动释放

堆区
由程序员分配释放，在C++中主要利用new在堆区开辟内存

*/

#include<iostream>
using namespace std;

int* func()
{
	int* p = new int(10); // 返回一个地址
	return p;
}

int* func_()
{
	int a = 10;
	return &a;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	int* p_ = func_();
	cout << *p_ << endl;
	cout << *p_ << endl;
	cout << *p_ << endl;
	cout << *p_ << endl;

	system("pause");
	return 0;
}
