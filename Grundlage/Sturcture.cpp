#include<iostream>
#include<string>
using namespace std;
#include<ctime>

int main()
{
	// if语句-else if-else

	// 三目运算符 --> 表达式1 ? 表达式2 : 表达式3 --> if 表达式1 表达式2 否则 表达式2
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// switch
	int score = 10;
	switch(score)
	{
	case 10:
		cout << "very good" << endl;
		break;
	case 9:
		cout << "good" << endl;
		break;
	default:
		cout << "normal" << endl;
		break;
	}

	// 循环语句

	// while
	int num = 0;
	while (num < 10) 
	{
		cout << num << endl;
		num++;
	}

	srand((unsigned)time(NULL));
	cout << rand()%100 << endl;

	// do while
	num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	// 水仙花数练习
	num = 100;
	do 
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a* a* a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;

	} while (num < 1000);

	// for 敲桌子练习
	for (int i = 0; i < 100; i++)
	{
		if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7)
		{
			cout << "kick" << endl;
		}
		else 
		{
			cout << i << endl;
		}
	}

	// 嵌套循环
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*" << endl;
		}
	}

	// 跳转语句
	// break
	// continue 执行到本行，不执行后面的代码而执行下次循环
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	// goto
	cout << "1.xxx" << endl;
	cout << "2.xxx" << endl;
	goto Flag;
	cout << "3.xxx" << endl;
	cout << "4.xxx" << endl;
	Flag:
	cout << "5.xxx" << endl;

	system("pause");
	return 0;
}