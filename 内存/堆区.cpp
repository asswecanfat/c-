#include <iostream>
using namespace std;

int* fun() {  // 在堆区创建数据用new
	// 此时的指针也是变量，放在栈上
	int* k = new int(10);  // 返回的是地址
	return k;
}

int main2() {
	int* k = fun();
	cout << *k << endl;
	system("pause");
	return 0;
}