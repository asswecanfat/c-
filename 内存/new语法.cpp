#include <iostream>
using namespace std;

int* tfunc() {  // ���е������ɳ���Ա�ͷ�
	return new int(20);
}

void test() {
	// �ͷ�������Ҫ��delete�ؼ���
	int* t = tfunc();
	cout << *t << endl;
	cout << *t << endl;
	cout << *t << endl;
	delete t;
}

void test2() {
	int* d = new int[10];  //��������
	for (int i = 0; i < 10; i++) {
		d[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++) {

		cout << d[i] << endl;
	}
	delete[] d; // ɾ��ͷָ����º���ָ���Ұָ�루���Ƿ�ָ�룩
}

int main() {
	// test();
	test2();
	system("pause");
	return 0;
}