#include <iostream>

//2.4
int main24()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

	return 0;
}
//2.8
int main28()
{
	std::cout << "2M\n";
	std::cout << "2M" << "\n";
	std::cout << "2" << "\t" << "M" << "\n";
	return 0;
}
//2.16
int main216()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	std::cout << "d ; " << d << std::endl;
	r2 = r1;
	std::cout << "r2 ; " << r2 << std::endl;
	i = r2;
	std::cout << "i ; " << i << std::endl;
	r1 = d;
	std::cout << "r1 ; " << r1 << std::endl;
	return 0;
}
//2.18
int main218()
{
	int a = 0, b = 1;
	int *p1 = &a;  //p1是一个int型的指针，指向变量a，p1里面存的是a的地址
	std::cout << *p1 << std::endl;
	int *p2 = p1;//指针的指针，指向p1的指针
	//p1 = &b;//改变了指针的值，，，修改指针的指向
	//std::cout << *p1 << std::endl;
	*p1 = b;//这里的*是一个解引用符号,改变指针所指对象的值 修改指针指向对象的值
	std::cout << *p1 << std::endl;
	std::cout << a << std::endl;
	return 0;
}
//2.33
int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "g = " << g << std::endl;
	a = 42;
	b = 42;
	c = 42;
	//d = 42;//错误
	//e = 42;//错误
	//g = 42;//错误
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "g = " << g << std::endl;
}
