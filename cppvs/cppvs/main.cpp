#include <iostream>
#include <map>
#include <string>
#include <time.h>
#include <ctime>

using namespace std;// ��������


int main() {

	std::cout << "Hello, World!" << std::endl;

	map<int, string> mapStudent;
	string s;//����һ��string ����
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

	// for ѭ��ִ��
	for (int a = 10; a < 20; a = a + 1) {
		cout << "a ��ֵ��" << a << endl;
	}
	
	//��Ԫ
	auto res = sss == "testest" ? "TRUE" : "FALSE";
	cout << res << endl;

	// ��������
	srand((unsigned)time(NULL));
	int i, j;
	/* ���� 10 ������� */
	for (i = 0; i < 10; i++)
	{
		// ����ʵ�ʵ������
		j = rand();
		cout << "������� " << j << endl;
	}


	

	return 0;
}