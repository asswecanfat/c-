#include <iostream>
using namespace std;

int* fun() {  // �ڶ�������������new
	// ��ʱ��ָ��Ҳ�Ǳ���������ջ��
	int* k = new int(10);  // ���ص��ǵ�ַ
	return k;
}

int main2() {
	int* k = fun();
	cout << *k << endl;
	system("pause");
	return 0;
}