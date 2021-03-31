#include <iostream>
#include <fstream>
using namespace std;
//二进制读文件

class person
{
	public:
		char m_name[64];
		int m_age;

};
void test01()
{
	//创建流对象
	ifstream ifs;
	//打开文件
	ifs.open("person.txt", ios::in | ios::binary);
	//判断是否文件已经打开
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	person p;
	ifs.read((char*)(&p), sizeof(person));

	cout << "姓名为：" << p.m_name << endl;
	cout << "年龄为:" << p.m_age << endl;

	ifs.close();


}
int main()
{
	
	test01();
	system("pause");
	return 0;

}