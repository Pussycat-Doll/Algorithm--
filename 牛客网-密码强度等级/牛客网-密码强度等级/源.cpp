#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	string pw;
	while (cin >> pw)
	{
		int score = 0;
		int score_char = 0;
		int score_size = 0;
		int score_other = 0;
		int score_num = 0;
		int score_unbelieve = 0;

		if (pw.size() <= 4)
			score_size = 5;
		else if (pw.size() >= 5 && pw.size() <= 7)
			score_size = 10;
		else if (pw.size() >= 8)
			score_size = 25;

		int count_big = 0;
		int count_small = 0;
		int count_num = 0;
		int count_other = 0;
		for (size_t i = 0; i < pw.size(); ++i)
		{
			if (pw[i] >= 'a' && pw[i] <= 'z')
				count_small++;
			else if (pw[i] >= 'A' && pw[i] <= 'Z')
				count_big++;
			else if (pw[i] >= '0' && pw[i] <= '9')
				count_num++;
			else
				count_other++;
		}
		if (count_big == 0 && count_small == 0)
			score_char = 0;
		else if (count_big != 0 && count_small != 0)
			score_char = 20;
		else if (count_big = pw.size() || (count_small = pw.size()))
			score_char = 10;

		if (count_num == 0)
			score_num = 0;
		else if (count_num == 1)
			score_num = 10;
		else
			score_num = 20;

		if (count_other == 0)
			score_other = 0;
		else if (count_other == 1)
			score_other = 10;
		else
			score_other = 25;

		if ((count_small > 0) && (count_big > 0) && (count_num > 0) && (count_other > 0))
			score_unbelieve = 5;
		else if ((count_small + count_big > 0) && (count_num > 0) && (count_other > 0))
			score_unbelieve = 3;
		else if ((count_small + count_big > 0) && (count_num > 0))
			score_unbelieve = 2;

		score = score_unbelieve + score_other + score_num + score_char + score_size;

		if (score >= 90)
			cout << "VERT_SECURE" << endl;
		else if (score >= 80)
			cout << "SECURE" << endl;
		else if (score >= 70)
			cout << "VERY_STRONG" << endl;
		else if (score >= 60)
			cout << "STRONG" << endl;
		else if (score >= 50)
			cout << "AVERAGE" << endl;
		else if (score >= 25)
			cout << "WEAK" << endl;
		else
			cout << "VERY_WEAK" << endl;
	}
	system("pause");
	return 0;
}
