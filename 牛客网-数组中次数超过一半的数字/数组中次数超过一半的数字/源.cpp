#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		int arr[10] = { 0 };
		for (int i = 0; i < numbers.size(); ++i)
		{
			arr[numbers[i]]++;
		}
		for (int i = 0; i < 10; ++i)
		{
			if (arr[i] >(numbers.size() / 2))
			{
				return i;
			}
		}
		return 0;
	}
};
