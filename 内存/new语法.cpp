#include <iostream>
using namespace std;

int* tfunc() {  // 堆中的数据由程序员释放
	return new int(20);
}

void test() {
	// 释放数据需要用delete关键字
	int* t = tfunc();
	cout << *t << endl;
	cout << *t << endl;
	cout << *t << endl;
	delete t;
}

void test2() {
	int* d = new int[10];  //整形数组
	for (int i = 0; i < 10; i++) {
		d[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++) {

		cout << d[i] << endl;
	}
	delete[] d; // 删除头指针后导致后续指针变野指针（即非法指针）
}

int main() {
	// test();
	test2();
	system("pause");
	return 0;
}