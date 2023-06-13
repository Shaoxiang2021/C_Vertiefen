#include<iostream>
#include<string>
using namespace std;

int main()
{
	// 数组

	/*
	* 1. 数据类型 数组名 [数组长度]
	* 2. 数据类型 数组名 [数组长度] = { 值1， 值2 ...}
	* 3. 数据类型 数组名 [ ] = { 值1， 值2 ...}
	*/

	// 1.
	// 赋值
	int arr[5];
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;

	// 访问
	cout << arr[0] << endl;

	// 2.
	// 初始化没有赋值的数值，自动用零填补
	int arr_2[5] = { 10, 20, 30, 40, 50 };
	cout << arr_2[2] << endl;

	// 3.
	// 定义数组必须有初始长度
	int arr_3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int arr_4[5];
	for (int i = 0; i < 5; i++)
	{
		cout << arr_4[i] << endl;
	}

	/*一维数组名称的用途:
	* 1. 可以统计整个数组内存中的长度
	* 2. 可以获取数组在内存中的首地址
	* sizeof(arr) or sizeof(arr[0]) 后者查看单个元素
	* cout<<arr<<endl; (int)arr (int)&arr[0]
	*/ 

	/*
	* 冒泡排序
	* 1. 比较相邻的元素。如果第一个比第二个打，就交换他们两个
	* 2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值
	* 3. 重复以上的步骤，每次比较次数-1，知道不需要比较
	*/
	int arr_[9] = { 2, 4, 1, 7, 8, 9, 6, 3, 10 };
	
	for (int i = 0; i < 9; i++)
	{
		cout << arr_[i] << " ";
	}
	cout << endl;
	
	// 总共排序论述为 元素个数 - 1  
	for (int i = 0; i < 9 - 1; i++)
	{
		// 内层循环对比 次数 = 元素个数 - 当前轮数 - 1
		for (int j = 0; j < 9 - i - 1; j++)
		{
			if (arr_[j] > arr_[j + 1])
			{
				int temp = arr_[j];
				arr_[j] = arr_[j + 1];
				arr_[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		cout << arr_[i] << " ";
	}

	// 二维数组定义方式

	// 1.
	int arr_2d_1[2][3];
	arr_2d_1[0][0] = 1;

	// 2.
	int arr_2d_2[2][3] = 
	{
		{1, 2, 3},
		{2, 3, 4}
	};

	// 3.
	int arr_2d_3[2][3] = { 1, 2, 3, 4, 5, 6 };

	// 4.
	int arr_2d_4[][3] = { 1, 2, 3, 4, 5, 6 };

	// 二维数组名称用途
	/*
	* 1. 可以查看占用内存空间大小
	* cout<<sizeof(arr)<<endl;
	* cout<<sizeof(arr[0]<<endl; 一行占用的空间
	* cout<<sizeof(arr[0][0]<<endl;
	* 2. 可以查看二维数组的首地址
	* cout<<(int)arr<<endl;
	* cout<<(int)arr[0]<<endl;
	*/

	system("pause");
	return 0;
}
