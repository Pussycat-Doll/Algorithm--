#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int getValue(vector<int> gifts, int n) {
	/*int num = gifts[0];
	int times[10] = { 0 };
	for (size_t i = 0; i < gifts.size(); ++i)
	{
		times[gifts[i]]++;
	}
	for (size_t i = 1; i < 10; ++i)
	{
		if (times[i] > gifts.size() / 2)
			return i;
	}
	return 0;*/
	int times = 1;
	int result = gifts[0];
	for (size_t i = 0; i < gifts.size(); ++i)
	{
		if (result == gifts[i])
			++times;
		else if (times == 0)
		{
			times = 1;
			result = gifts[i];
		}
		else
			--times;
	}
	times = 0;
	for (size_t i = 0; i < gifts.size(); ++i)
	{
		if (result == gifts[i])
			times++;
	}
	return times > n / 2 ? result : 0;
}
int main()
{
	vector<int> gifts = { 1, 2, 3, 2, 2 };
	int n = 5;
	cout << getValue(gifts, n) << endl;
	system("pause");
	return 0;
}