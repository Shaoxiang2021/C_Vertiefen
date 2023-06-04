#include<iostream>
#include<string>
using namespace std;

/*
数据类型存在的意义：给变量分配合适的内存空间
*/

int main()
{
	//----整型和实型----
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	// float f1 = 3.14; double --> float
	float f1 = 3.14f; //直接告诉这是个float数据类型，后面加f
	double f2 = 3.1415926;

	//科学计数法
	float f3 = 3e2f;
	float f4 = 3e-2f;

	cout << "num1 = " << num1 << endl; 
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	//sizeof 统计数据类型所占内存大小 字节

	cout << "num1 size = " << sizeof(num1) << endl;
	cout << "num2 size = " << sizeof(num2) << endl;
	cout << "num3 size = " << sizeof(num3) << endl;
	cout << "num4 size = " << sizeof(num4) << endl;

	cout << "f1 size = " << sizeof(f1) << endl;
	cout << "f2 size = " << sizeof(f2) << endl;

	//----字符型----
	/*
	* 字符型变量是将对应的ASCII编码存储到存储单元
	*/
	char ch = 'a'; //创建字符型变量不能用双引号

	cout << "ASCII ch = " << int(ch) << endl;

	//----转义字符---- 常用的转义字符有：\n \\ \t

	//----字符串型----
	char str1[] = "hello world";
	cout << "str = " << str1 << endl;

	string str = "hello world"; //需要包含头文件 string

	//----布尔型----

	// cin 输入数据

	system("pause");
	return 0;
}
