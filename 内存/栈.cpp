#include <iostream>
using namespace std;

int* func() {  // 栈区数据，执行完后会清空该内存
	int a = 10;
	return &a;
}

int main1() {
	int* p = func();
	cout << *p << endl;  // 可能有数据,编译器会保留一次结果
	cout << *p << endl;
	system("pause");
	return 0;
}