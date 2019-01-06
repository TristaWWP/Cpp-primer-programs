#include <iostream>
#include <string>
#include<vector>
#include<cstring>

using namespace std;

//3.2
int main32()
{
	string line;
	while (cin >> line)
		cout << line << endl;
	return 0;
}
int main3211()
{
	string line;
	while (getline(cin, line))
		cout << line << endl;
	return 0;
}
//3.4
int main34()
{
	string myString1, myString2;
	cin >> myString1 >> myString2;
	if (myString1 != myString2) {
		cout << (myString1 >= myString2 ? myString1 : myString2) << endl;
	}
	if (myString1.size() != myString2.size()) {
		cout << (myString1.size() >= myString2.size() ? myString1.size() : myString2.size()) << endl;
	}
	return 0;
}
//3.5
int main35()
{
	string mulString, sumString;
	while (getline(cin, mulString)) {
		sumString += mulString;
		cout << sumString << endl;
	}
	return 0;
}
//3.6
int main36()
{
	string myString("ghdsgh");
	/*for (auto &c : myString)
		c = 'X';*/
	int n = myString.size();
	for (int i = 0; i < n; i++)
		myString[i] = 'X';
	cout << myString;
	return 0;
}
//3.10
int main310()
{
	string mySting("dajshj,ds");
	for (auto &c : mySting)
		if (!ispunct(c))
			cout << c;
	//cout << mySting << endl;
	return 0;
}
//3.14
int main314()
{
	vector<int> myVector;
	int n;
	while (cin >> n) {
		myVector.push_back(n);
	}
	cout << myVector.size() << endl;
	return 0;
}
//3.15
int main315()
{
	vector<string> myVector1;
	string myString1;
	while (cin >> myString1) {
		myVector1.push_back(myString1);
	}
	cout << myVector1.size() << endl;
	return 0;
}
//3.16
int main316()
{
	vector<string> v{10, "hi"};
	for (auto i : v)
		cout << i << endl;
	return 0;
}
//3.17
int main317()
{
	vector<string> myVector2;
	string myString2;
	while (cin >> myString2) {
		for (auto &c : myString2) {
			c = toupper(c);
		}
		myVector2.push_back(myString2);
	}
	for (auto i : myVector2) {
		cout << i << endl;
	}		
	return 0;
}
//3.20
int main320()
{
	vector<int> myVector3;
	int n1;
	while (cin >> n1) {
		myVector3.push_back(n1);
	}
	int sum[10];
	for (int i = 0; i < myVector3.size() - 1; i++) {
		sum[i] = myVector3[i] + myVector3[i + 1];
		cout << sum[i] << endl;
	}
	return 0;
}
//3.21
int main321()
{
	vector<string> v{ 10, "hi" };
	for (auto iter = v.begin(); iter != v.end() && !iter ->empty(); iter++)
		cout << *iter << endl;
	return 0;
}
//3.22
int main322()
{
	vector<string> text;
	string myString3;
	while (getline(cin, myString3)) {
		text.push_back(myString3);
	}
	for (auto iter1 = text.begin(); iter1 != text.end() && !iter1->empty(); ++iter1) {
		for (auto &c : *iter1) {
			c = toupper(c);	
		}
		cout << *iter1 << endl;
	}    
	return 0;
}
//3.23
int main323()
{
	vector<int> myVector{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto iter2 = myVector.begin(); iter2 != myVector.end(); iter2++) {
		*iter2 = *iter2 * 2;
		cout << *iter2 << endl;
	}
	return 0;
}
//3.24
int main324()
{
	vector<int> myVector3;
	int n1;
	while (cin >> n1) {
		myVector3.push_back(n1);
	}
	for (auto iter = myVector3.begin(); iter + 1  != myVector3.end(); iter++) {
		cout << *iter + *(iter + 1) << endl;
	}
	return 0;
}
//3.25
int main325()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			auto iter = scores.begin();
			int n = grade / 10;
			iter = iter + n;
			++(*iter);
		   		
		}
	}
	for (auto c : scores)
		cout << c << endl;
	return 0;
}
//3.31
int main331()
{
	int a[10];
	for (size_t i = 0; i < 10; i++) {
		a[i] = i;
	}
	for (auto c : a) {
		cout << c << endl;
	}
	return 0;
}
//3.32
int main332()
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int b[10];
	for (size_t i = 0; i < 10; ++i) {
		b[i] = a[i];
	}
	for (auto c : b) {
		cout << c << endl;
	}
	return 0;
}
//3.35
int main335()
{
	int a[5] = { 0, 1, 2, 3, 4 };
	int *p = a;
	for (int i = 0; i != 5; i++) {
		*p = 0;//找到首地址，然后指针一次递增
		++p;
	}
	for (auto c : a)
		cout << c << endl;
	return 0;
}
//3.36,比较大小，先比较长度，再比较每个位置的元素
int main336()
{
	int a[4] = { 0, 1, 2, 0 };
	int b[4] = { 0, 1, 2, 3 };
	int *abeg = begin(a);
	int *aend = end(a);
	int *bbeg = begin(b);
	int *bend = end(b);
	if ((end(a) - begin(a)) == (end(b) - begin(b))) {
		for (int *i = abeg, *j = bbeg; (i != aend) && (j != bend); ++i, ++j) {
			if (*i != *j)
				cout << "They are different" << endl;
		}
	}
	else
	{
		cout << "They are different" << endl;
	}
	return 0;
}
//3.39
int main339()
{
	string s1 = "hello";
	string s2 = "halllll";
	/*if (s1 < s2) {
		cout << "s2大" << endl;
	}
	else {
		cout << "s1大" << endl;
	}*/
	//C风格字符串比较
	const char s11[] = "hello";
	const char s22[] = "halllll";
	auto result = strcmp(s11, s22);
	if (result > 0) {
		cout << "s11大" << endl;
	}
	else {
		cout << "s22大" << endl;
	}
	return 0;
}
//3.40
int main340()
{
	char c1[] = "dsa";
	const char c2[] = "dsd";
	size_t newsize = strlen(c1) + strlen(c2) + 1;
	char *c3 = new char[newsize];
//	strcat(c1, c2);
	cout << c1 << endl;
//	strcpy(c3, c1);
	cout << c3 << endl;
	return 0;
}
//3.41
int main341()
{
	int a[] = { 1, 2, 3 };
	vector<int> v(begin(a), end(a));
	for (auto c : v) {
		cout << c << endl;
	}
	return 0;
}
//3.42
int main342()
{
	vector<int> v = { 12, 3, 4 };
	int a[3];
	for (auto i = begin(a); i != end(a); ++i) {
		*i = v[i - begin(a)];
	}
	for (auto i : a) {
		cout << i << endl;
	}
	return 0;
}
//3.43
int main()
{
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int (&m)[4] : a) {
		for (int n : m) {
			cout << n << endl;
		}
	}
	for (size_t i = 0; i != 3; i++) {
		for (size_t j = 0; j != 4; j++) {
			cout << a[i][j] << endl;
		}
	}
	for (int(*p)[4] = a; p != a + 3; p++) {
		for (int *q = *p; q != *p + 4; q++) {
			cout << *q << endl;
		}
	}
	return 0;
}
