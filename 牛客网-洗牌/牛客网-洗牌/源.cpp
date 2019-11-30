#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<vector>
#include<queue>
using namespace std;

void onesort(queue<int>* ve)
{
	queue<int> left_cards;
	queue<int> right_cards;
	int capa = ve->size() / 2;
	while (capa--)
	{
		int card = ve->front();
		ve->pop();
		left_cards.push(card);//左手的牌
	}
	capa = ve->size();
	while (capa--)
	{
		int card = ve->front();
		ve->pop();
		right_cards.push(card);//右手的牌
	}
	while (!left_cards.empty() && !right_cards.empty())
	{
		ve->push(left_cards.front());
		left_cards.pop();
		ve->push(right_cards.front());
		right_cards.pop();
	}
}
//static queue<int> que;
void sortmore(queue<int>* ve, int k)
{
	while (k--)
	{
		onesort(ve);
	}
}
int main()
{
	int grop;
	cin >> grop;
	while (grop--)
	{
		int n, k;//n--一个手中牌的个数，k--洗牌的次数
		cin >> n >> k;
		queue<int> ve;

		int length = n * 2;
		while (length--)
		{
			int card;
			cin >> card;
			ve.push(card);
		}

		sortmore(&ve, k);

		while (!ve.empty())
		{
			cout << ve.front() << " ";
			ve.pop();
		}
		cout << endl;
	}
	/*while (!que.empty())
	{
		cout << que.front() << " ";
		que.pop();
	}
	cout << endl;
	*/
	system("pause");
	return 0;
}