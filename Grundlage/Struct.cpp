#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
}; // }s3; --> 3.

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};

int main()
{
	// 创建结构体变量
	// 1.
	struct Student s1;
	s1.name = "Hans";
	s1.age = 30;
	s1.score = 80;

	// 2.
	struct Student s2 = { "Hans", 20, 30 };

	// 3.

	// 结构体数组
	struct Student stuArray[3] =
	{
		{"Hans", 20, 30},
		{"Mulle", 30, 50},
		{"Jans", 80, 40}
	};

	// 结构体指针
	struct Student s3 = { "Hans", 20, 30 };

	Student* p = &s3;

	p->age = 10;

	cout << p->age << endl;

	// 结构体嵌套结构体
	Teacher t;
	t.id = 19934;
	t.name = "Jasen";
	t.age = 50;
	t.stu.age = 20;
	t.stu.name = "Meisen";
	t.stu.score = 10;

	// 常量结构体做形参
	/*
	* void printStudent(const student* s)
	*/

	system("pause");
	return 0;
}
