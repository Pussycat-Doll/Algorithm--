#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int StrToInt(string str)
	{
		int flag = 1;
		int num = 0;
		for (size_t i = 0; i < str.size(); ++i)
		{
			if (i == 0 && str[0] == '+')
				i = 1;
			else if (i == 0 && str[0] == '-')
			{
				flag = -1;
				i = 1;
			}
			if (str[i] > '0' && str[i] < '9')
			{
				num = num * 10 + str[i] - '0';
			}
			else
				return 0;
		}
		return num*flag;
	}
};