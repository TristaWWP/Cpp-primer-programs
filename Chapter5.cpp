#include<iostream>
#include<vector>
#include<string>

using namespace std;

//5.5
int main55()
{
	int grade;
	cin >> grade;
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	string lettergrade;
	if (grade < 60) {
		lettergrade = scores[0];
	}
	else {
		lettergrade = scores[(grade - 50) / 10];
	}
	cout << lettergrade << endl;
	return 0;
}
//5.6
int main56()
{
	int grade;
	cin >> grade;
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	string lettergrade;
	  
	lettergrade = (grade < 60) ? scores[0] : scores[(grade - 50) / 10];
	cout << lettergrade << endl;
	return 0;
}
//5.9
int main59()
{
	int cnt = 0;
	char ch;
	while (cin >> ch) {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			++cnt;
		}
	}
	cout << cnt << endl;
	return 0;
}
//5.10
int main510()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		default:
			break;
		}
	}
	cout << aCnt << endl;
	cout << eCnt << endl;
	cout << iCnt << endl;
	cout << oCnt << endl;
	cout << uCnt << endl;
	return 0;
}
//5..11
int main511()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newLineCnt;
			break;
		default:
			break;
		}
	}
	cout << aCnt << endl;
	cout << eCnt << endl;
	cout << iCnt << endl;
	cout << oCnt << endl;
	cout << uCnt << endl;
	cout << spaceCnt << endl;
	cout << tabCnt << endl;
	cout << newLineCnt << endl;
	return 0;
}
//5.12
int main512()
{
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch, mych = '\0';
	while (cin >> ch) {
		switch (ch)
		{
		case 'f':
			if (mych == 'f')
				++ffCnt;
			break;
		case 'l':
			if (mych == 'f')
				++flCnt;
			break;
		case 'i':
			if (mych == 'f')
				++fiCnt;
			break;
		default:
			break;
		}
		mych = ch;
	}
	cout << ffCnt << endl;
	cout << flCnt << endl;
	cout << fiCnt << endl;
	return 0;
}
//5.14
void main514()
{
	string my_string, before_string, max_repeatstring;
	vector<string> v1;//存储每个连续输入的单词
	vector<int> v2;//存储每个单词连续出现的次数
	int repeat_number = 0, flag = 0, m = 0;
	while (cin >> my_string) {
		if (my_string == before_string) {
			++repeat_number;
			m++; //此变量是因为最后输入的单词不会再调用else， 所以需要记录本单词的出现次数
		}
		else {
			v2.push_back(repeat_number);
			repeat_number = 1;
			before_string = my_string;
			v1.push_back(my_string);
			m = 0;
		}
	}
	v2.push_back(m + 1);
	int a = 0;
	auto it1 = v2.begin();
	for (it1; it1 != v2.end(); ++it1) {
		if (*it1 > a) {
			a = *it1;//找到最大元素
		}
	}
	for (int i = 0; i < v2.size(); i++) {
		if (v2[i] == a) {
			cout << "单词" << v1[i - 1] << "次数" << v2[i] << endl;
		}
	}
}
//5.17
int main517()
{
	vector<int> v1 = { 0, 1, 1, 2 };
	vector<int> v2 = { 0, 1, 1, 2, 3, 5, 8 };
	auto size = v1.size() < v2.size() ? v1.size() : v2.size();
		for (decltype(v1.size()) i = 0; i != size; ++i) {
			if (v1[i] != v2[i]) {
				cout << "f" << endl;
				return 0;
			}
		}
		cout << "T" << endl;
		return 0;
	}
//5.19
int main519()
{
	
	do {
		string  mystring1, mystring2;
		cout << "请输入两个string对象" << endl;
		cin >> mystring1 >> mystring2;
		if (mystring1.size() <= mystring2.size()) {
			cout << mystring1 << endl;
		}
		else {
			cout << mystring2 << endl;
		}
	} while (cin);
	return 0;
}
//5.20
int main520()
{
	string mystring, beforstring;
	while (cin >> mystring) {
		if (mystring == beforstring) {
			break;
		}
		else {
			beforstring = mystring;
		}
	}
	if (cin.eof()) {
		cout << "没有重复" << endl;
	}
	else {
		cout << mystring << "重复两次" << endl;
	}
	return 0;
}
//5.21
int main521()
{
	string mystring, beforstring;
	bool no_repeat = false;

	while (cin >> mystring) {
		if (!isupper(mystring[0])) {//如果第一个不是大写字母，本次循环终止，继续输入下一个字符串
			beforstring = " ";
			continue;
		}
		if (mystring == beforstring) {
			cout << mystring << "重复两次" << endl;
			no_repeat = true;
			break;
		}
		beforstring = mystring;
	}
	if (!no_repeat) cout << "无重复" << endl;
	
	return 0;
}
//5.23
int main523()
{
	int n1, n2;
	cin >> n1 >> n2;
	cout << n1 / n2 << endl;
	return 0;
}
//5.24
int main524()
{
	int n1, n2;
	cin >> n1 >> n2;
	if (n2 == 0) {
		throw runtime_error("除数为0");
	}
	cout << n1 / n2 << endl;
	return 0;
}
//5.25
int main()
{
	int n1, n2;
	cout << "输入两个整数";
	while (cin >> n1 >> n2) {
		try {
			if (n2 == 0) {
				throw runtime_error("除数为0");
			}
			cout << n1 / n2 << endl;
			cout << "输入两个整数";
		}
		catch (runtime_error err) {
			cout << err.what();
			cout << "\n 重新输入？Y or N" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
	return 0;
}
