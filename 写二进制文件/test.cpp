#include <iostream>
#include <fstream>
using namespace std;
//写二进制文件



class person
{

public:

	char m_name[64];
	int m_age;

};
void test01()
{

	//包含头文件

//创建输出流

	ofstream ofs;
	//打开文件
	ofs.open("person.txt", ios::out | ios::binary);
	//写内容
	person p = { "王小帅",18 };
	ofs.write((const char*) &p, sizeof(person));
	//关闭文件
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}