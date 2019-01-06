#include<iostream>
#include<vector>
#include<string>

using namespace std;

//4.18
int main418()
{
	vector<int> v = {0, 1, 2, 3};
	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0)
		//cout << *pbeg++ << endl;
		cout << *(++pbeg) << endl;//使用前置递增运算符，该行出错，
	return 0;
}
//4.21
int main421() 
{
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7 };
	for (auto &i : v) {
		i = (i % 2) ? (i*2) : i;
	}
	for (auto i : v) {
		cout << i << endl;
	}
	return 0;
}
//4.22
int main422()
{
	string finalgrade;
	int grade;
	/*while (cin >> grade)
	{
		finalgrade = (grade > 90) ? "high pass" : ((grade > 60 && grade < 75) ? "low pass" : ((grade < 60) ? "fail" : "pass"));
	}
	cout << finalgrade << endl;*/
	//if版本
	cin >> grade;
	if (grade > 90)
		cout << "high pass";
	else if (grade < 60)
		cout << "fail";
	else if (grade < 75)
		cout << "low pass";
	else
		cout << "pass";
	return 0;
}
//4.23
int main423()
{
	string s = "word";
	cout << s.size() - 1 << endl;
	cout << s[s.size() - 1] << endl;
	string pl = s + (s[s.size() - 1] == 's' ? " " : "s");
	cout << pl << endl;
	return 0;
}
//4.28
int main428()
{
	cout << "bool" << sizeof(bool) << endl;
	cout << "char" << sizeof(char) << endl;
	cout << "wchar_t" << sizeof(wchar_t) << endl;
	cout << "char16_t" << sizeof(char16_t) << endl;
	cout << "char32_t" << sizeof(char32_t) << endl;
	cout << "short" << sizeof(short) << endl;
	cout << "int" << sizeof(int) << endl;
	cout << "long" << sizeof(long) << endl;
	cout << "long long" << sizeof(long long) << endl;
	cout << "float" << sizeof(float) << endl;
	cout << "double" << sizeof(double) << endl;
	cout << "long double" << sizeof(long double) << endl;
	int x[10];
	int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;

	return 0;
}
//4.32
int main()
{
	constexpr int size = 5;
	int ia[size] = { 1, 2, 3, 4, 5 };
	for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {
		cout << *ptr << endl;
		cout << ix << endl;
	}
	
	return 0;
}
