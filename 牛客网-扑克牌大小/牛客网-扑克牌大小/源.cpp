#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
static vector<string> Sort= { "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "joker", "JOKER" };
void print(string str,int start,int end)
{
	for (int i = start; i < end; ++i)
		cout << str[i];
}
void single_to(string str)//一张扑克牌以上的比较
{
	int sub1 = 0;
	int sub2 = 0;
	int start1 = 0;
	int start2 = 0;
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (str[i] == '-')
		{
			start2 = ++i;
			break;
		}
	}
	for (size_t i = 0; i < Sort.size(); ++i)
	{
		if (str[0] == Sort[i][0])
			sub1 = i;
		if (str[start2] == Sort[i][0])
			sub2 = i;
	}
	if (sub1 >= sub2)
		print(str, start1, start2 - 1);
	else
		print(str, start2, str.size());
	cout << endl;
}
void Is_equal(string str)
{
	int size1 = 0;
	int size2 = 0;
	size_t line = str.find('-');
	size_t begin1 = 0;
	string car1 = str.substr(0, line);
	string car2 = str.substr(line +1, str.size());
	size1 = count(car1.begin(), car1.end(), ' ');
	size2 = count(car2.begin(), car2.end(), ' ');
	int flag = 0;
	if (str.find("joker JOKER") != string::npos)
		flag = 1;
	if (flag == 1)
		cout << "joker JOKER" << endl;
	else if (size1 == 3)
		cout << car1 << endl;
	else if (size2 == 3)
		cout << car2 << endl;
	else if (size1 == size2)
		single_to(str);
	else
		cout << "ERROR" << endl;
}

int main()
{
	string str = "J J J-3 3 3 3";
	Is_equal(str);
	system("pause");
	return 0;
}