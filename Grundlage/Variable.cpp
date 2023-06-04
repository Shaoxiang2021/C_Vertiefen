# include<iostream>
using namespace std;

/*
#define 
宏常量： 通常在文件上方定义，表示一个常量

const
修饰的变量 const 数据类型
通常在变量的前加关键字const，修饰该变量为常量，不可修改
*/

/*
标识符命名规则
1.标识符不可以是关键字
2.标识符是有字母数字和下划线构成
3.标识符第一个字符只能是字母或下划线
4.标识符是区分大小写的
建议：给变量起名的时候，最好能够做到简明之意
*/

#define Day 7

int main()
{
	int a = 10;
	// Day = 14; 此处不可修改报错
	const int b = 4;
	// b = 14 此处不可修改报错

	cout << "a = " << a << endl;
	return 0;
}
