#include <iostream>
using namespace std;

int* func() {  // ջ�����ݣ�ִ��������ո��ڴ�
	int a = 10;
	return &a;
}

int main1() {
	int* p = func();
	cout << *p << endl;  // ����������,�������ᱣ��һ�ν��
	cout << *p << endl;
	system("pause");
	return 0;
}