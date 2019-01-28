#include <iostream>
#include <map>
#include <string>
#include <time.h>
#include <ctime>
#include "file.h"
//宏定义
#define ABS = "5"

using namespace std;// 函数声明
					// 第二个命名空间
namespace space {
	void func() {
		cout << "Inside second_space" << endl;
	}
}

int main() {

	std::cout << "Hello, World!" << std::endl;

	map<int, string> mapStudent;
	string s;//声明一个string 对象
	s = "ssbb";
	mapStudent.insert(pair<int, string>(1, "student_one"));
	mapStudent.insert(pair<int, string>(2, "student_two"));
	mapStudent.insert(pair<int, string>(3, "student_three"));
	cout << mapStudent.size() << endl;
	cout << s << endl;
	const string ss = "ss";
	if (true) {
		cout << ss << endl;
	}
	auto sss = "testest";
	cout << ss.size() << endl;
	int dd = 5;
	while (dd--) {
	}

	// for 循环执行
	for (int a = 10; a < 20; a = a + 1) {
		cout << "a 的值：" << a << endl;
	}
	
	//三元
	auto res = sss == "testest" ? "TRUE" : "FALSE";
	cout << res << endl;

	// 设置种子
	srand((unsigned)time(NULL));
	int i, j;
	/* 生成 10 个随机数 */
	for (i = 0; i < 10; i++)
	{
		// 生成实际的随机数
		j = rand();
		cout << "随机数： " << j << endl;
	}


	file f;
	//f.openFile();
	try
	{
		// 保护代码
	}
	catch (exception e)
	{
		// 处理 ExceptionName 异常的代码
	}
	using namespace space;
	func();
	//throw "throw test";

	return 0;
}