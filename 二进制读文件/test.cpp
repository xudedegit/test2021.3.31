#include <iostream>
#include <fstream>
using namespace std;
//�����ƶ��ļ�

class person
{
	public:
		char m_name[64];
		int m_age;

};
void test01()
{
	//����������
	ifstream ifs;
	//���ļ�
	ifs.open("person.txt", ios::in | ios::binary);
	//�ж��Ƿ��ļ��Ѿ���
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	person p;
	ifs.read((char*)(&p), sizeof(person));

	cout << "����Ϊ��" << p.m_name << endl;
	cout << "����Ϊ:" << p.m_age << endl;

	ifs.close();


}
int main()
{
	
	test01();
	system("pause");
	return 0;

}