#include <iostream>
#include "Sales_item.h"
//1.1
int main11()
{
	return 0;
}
//1.2
int main12()
{
	return -1;
}
//P5
int mainP5()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of:" << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0;
}
//1.3
int main13()
{
	std::cout << "Hello World" << std::endl;
	return 0;
}
//1.4
int main14()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The multify of : " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	return 0;
}
//1.6
//int main16()
//{
//	std::cout << "Enter two numbers:" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	std::cout << "The sum of:" << v1;
//	<< " and " << v2;//输出运算符的左侧，必须是一个ostream的对象，因此不合法
//	<< " is " << v1 + v2 << std::endl;//同上
//	return 0;
//}
//1.8
//int main()
//{
//	std::cout << "/*";
//	std::cout << "*/";
//	std::cout << /* "*/" */;
//	std::cout << /* "*/"/* "/*" */;
//	return 0;
//}
//1.9
int main19()
{
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		val++;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	return 0;
}
//1.10
int main110()
{
	int i = 10;
	while (i >= 0) {
		std::cout << i << std::endl;
		i--;
	}
	return 0;
}
//1.11
int main111()
{
	std::cout << "Enter two numbers :" << std::endl;
	int v1, v2, i;
	std::cin >> v1 >> v2;
	if (v1 <= v2) {
		i = v1;
		while (i <= v2) {
			std::cout << i << std::endl;
			i++;
		}
	}
	else {
		i = v2;
		while (i <= v1) {
			std::cout << i << std::endl;
			i++;
		}
	}
	return 0;
}
//1.12
int main112()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum;
	return 0;
}
//1.13
int main113()
{
	/*int sum = 0;
	for (int val = 50; val <= 100; val++) {
		sum += val;
	}
	std::cout << sum;*/
	//for (int val = 10; val >= 0; val--) {
	//	std::cout << val << std::endl;
	//}
	int v1, v2;
	std::cin >> v1 >> v2;
	if (v1 <= v2) {
		for (int val = v1; val <= v2; val++) 
			std::cout << val << std::endl;
	}
	else {
		for (int val = v2; val <= v1; val++)
			std::cout << val << std::endl;
	}
	return 0;
}
//1.16
int main116()
{
	int sum = 0, val = 0;
	while (std::cin >> val) {
		sum += val;
		std::cout << "Sum is : " << sum << std::endl;
	}
	//std::cout << "Sum is : " << sum << std::endl;
	return 0;
}
//1.18
int main118()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}
	return 0;
}
//1.20
int main120()
{
	Sales_item book;
	while (std::cin >> book) {
		std::cout << book;
	}
	return 0;
}
//1.21
int main121()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
//1.22
int main122()
{
	Sales_item Sumitem, item;
	std::cin >> Sumitem;
	while (std::cin >> item) {
		Sumitem += item;
	}
	std::cout << Sumitem << std::endl;
	return 0;
}
//1.23
int main123()
{
	Sales_item currItem, nextItem;
	if (std::cin >> currItem) {//读取第一个数，并确保确实有数据可以处理
		int cnt = 1;
		while (std::cin >> nextItem) {
			if (currItem.isbn() == nextItem.isbn()) {
				cnt++;
				currItem = nextItem;
			}
			else {
				std::cout << currItem.isbn() << " has sold" << cnt << std::endl;
				cnt = 1;
				currItem = nextItem;
			}
		}
		//输出最后一条
		std::cout << currItem.isbn() << " has sold " << cnt << std::endl;
	}
	return 0;
}
//1.25
int main()
{
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}
	else {
		std::cerr << "No data?" << std::endl;
		return -1;
	}
	return 0;
}
