#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//{1,2,-2,3,1}
//{ -1,2,1 }
//max <= sum+arr[i]  max = max+arr[i],sum = max
/*
  max > sum+arr[i]  sum = arr[i]
*/
int childmax(vector<int> arr)
{
	int Max = arr[0];
	int sum = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		sum = max(sum + arr[i], arr[i]);
		Max = max(sum, Max);
	}
	return Max;
}
int main()
{
	/*int num = 0;
	vector<int> ve;
	cin >> num;
	int x;
	while (num--)
	{
		cin >> x;
		ve.push_back(x);
	}*/
	vector<int> ve = { 1,2,-2,3,1 };
	cout << childmax(ve) << endl;
	return 0;
}