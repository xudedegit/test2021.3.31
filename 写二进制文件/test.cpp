#include <iostream>
#include <fstream>
using namespace std;
//д�������ļ�



class person
{

public:

	char m_name[64];
	int m_age;

};
void test01()
{

	//����ͷ�ļ�

//���������

	ofstream ofs;
	//���ļ�
	ofs.open("person.txt", ios::out | ios::binary);
	//д����
	person p = { "��С˧",18 };
	ofs.write((const char*) &p, sizeof(person));
	//�ر��ļ�
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}